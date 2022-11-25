#include <bits/stdc++.h>
using namespace std;
#define V 4

void print(int color[]);

bool Check(int graph[V][V], int color[]){
	for (int i = 0; i < V; i++)
		for (int j = i + 1; j < V; j++)
			if (graph[i][j] && color[j] == color[i])
				return false;
	return true;
}

bool graphColoring(int graph[V][V], int m, int i, int color[V]){
	if (i == V) {
		if (Check(graph, color)) {
			print(color);
			return true;
		}
		return false;
	}

	for (int j = 1; j <= m; j++) {
		color[i] = j;
		if (graphColoring(graph, m, i + 1, color))
			return true;

		color[i] = 0;
	}

	return false;
}

void print(int color[]){
	cout <<"We can Color given Graph with M colors.\n"
	"The Following is the color given to each node :"<<endl;
	for (int i = 0; i < V; i++){
		cout <<"Vertex"<<i+1<<" -> " << "color"<<color[i]<<endl;
	}
	cout <<endl;
	cout<<endl;
}

int main(){

    // TEST CASE 1 --> GRAPH 1 ,When M = 3
    int graph1[V][V] = {
		{ 0, 1, 1, 1 },
		{ 1, 0, 1, 0 },
		{ 1, 1, 0, 1 },
		{ 1, 0, 1, 0 },
	};
	int m1=3;
	


    // TEST CASE 2 --> GRAPH 1, When M = 2
    int graph2[V][V] = {
		{ 0, 1, 1, 1 },
		{ 1, 0, 1, 0 },
		{ 1, 1, 0, 1 },
		{ 1, 0, 1, 0 },
	};
	int m2=2;


    // TEST CASE 2 --> Another GRAPH 2 ,When M=3
	int graph3[V][V] = {
		{ 0, 1, 1, 1 },
		{ 1, 0, 0, 0 },
		{ 1, 0, 0, 0 },
		{ 1, 0, 0, 0 },
	};
	int m3=2;
	
	int color[V];
	for (int i = 0; i < V; i++){
		color[i] = 0;
	}

	cout<<"Test Case 1 :"<<endl;
	if (!graphColoring(graph1, m1, 0, color)){
		cout << "We cannot color the graph with M given colors"<<endl;
	}
	cout<<"\nTest Case 2 :"<<endl;

	if (!graphColoring(graph2, m2, 0, color)){
		cout << "We cannot color the graph with M given colors"<<endl;
	}

	cout<<"\nTest Case 3 :"<<endl;
	if (!graphColoring(graph3, m3, 0, color)){
		cout << "We cannot color the graph with M given colors"<<endl;
	}

	return 0;
}