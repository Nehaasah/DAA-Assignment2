# DAA-Assignment2

Graph coloring is the procedure of assignment of colors to each vertex of a graph G such that no adjacent vertices get same color.
The objective is to minimize the number of colors while coloring a graph. The smallest number of colors required to color a graph G is called its chromatic number of that graph. 

Method to Color a Graph
The steps required to color a graph G with n number of vertices are as follows −


Step 1 − Arrange the vertices of the graph in some order.

Step 2 − Choose the first vertex and color it with the first color.

Step 3 − Choose the next vertex and color it with the lowest numbered color that has not been colored on any vertices adjacent to it. If all the adjacent vertices are colored with this color, assign a new color to it. 

Repeat this step until all the vertices are colored.


![s3](https://user-images.githubusercontent.com/102512172/204019866-892ffa23-bf51-45ef-81e1-34cc0636cab1.jpg)






![image](https://user-images.githubusercontent.com/102512172/204027899-085b4c24-1519-4c74-baf5-741bf32c82d6.png)


Test Case 1 -- > Here for Graph1  when M = 3 ; 3 colors are allocated to the vertices as per the graph coloring Rules without any difficulty      


          
Test Case 2 -- >
But for similar graph when M = 2 , 2 colors were insufficient to be assigned to the vertices keeping adjacent colors different.




Test Case 3 --> 
Here in another graph even with M = 2 , we are able to do the graph coloring , Since the vertices are connected in different manner .


![image](https://user-images.githubusercontent.com/102512172/204014462-16c6fb1e-23f3-47a0-8f44-98d567ad6c8f.png)





Applications of Graph Coloring


Some applications of graph coloring include −


•	Register Allocation


•	Map Coloring


•	Bipartite Graph Checking


•	Mobile Radio Frequency Assignment


•	Making time table, etc.

