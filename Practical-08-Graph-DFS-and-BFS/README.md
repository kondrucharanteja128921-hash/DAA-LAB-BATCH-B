Practical No.: 8

Aim

To implement Graph Traversal using Depth First Search (DFS) and Breadth First Search (BFS).

Theory

A graph consists of vertices (nodes) and edges connecting the vertices. Graph traversal means visiting all the reachable vertices of a graph systematically.

There are two common graph traversal techniques:

1. Depth First Search (DFS):
DFS visits a vertex and then explores one of its unvisited adjacent vertices as deeply as possible before backtracking. It can be implemented using recursion or a stack.

2. Breadth First Search (BFS):
BFS visits vertices level by level. It first visits all adjacent vertices of the starting vertex and then moves to the next level. BFS uses a queue.

Algorithm – DFS
Start from the selected vertex.
Mark the vertex as visited.
Display the vertex.
Visit each unvisited adjacent vertex recursively.
Continue until all reachable vertices are visited.
Algorithm – BFS
Start from the selected vertex.
Mark the vertex as visited and insert it into a queue.
Remove a vertex from the queue and display it.
Add all its unvisited adjacent vertices to the queue.
Repeat until the queue becomes empty.
Time Complexity
Traversal	Time Complexity	Space Complexity
DFS	O(V + E)	O(V)
BFS	O(V + E)	O(V)

Where V = number of vertices and E = number of edges.

C++ Program

Use your Practical_8_DFS_BFS.cpp file here.

Sample Input
Enter number of vertices: 6
Enter number of edges: 7

Enter edges:
0 1
0 2
1 3
1 4
2 4
3 5
4 5

Enter starting vertex: 0
Output

Your screenshot should show the actual output from your program, for example:

DFS Traversal: 0 1 3 5 4 2
BFS Traversal: 0 1 2 3 4 5

Note: The exact DFS order can depend on the order in which adjacent vertices are stored.

Conclusion

Thus, DFS and BFS graph traversal algorithms were implemented successfully. DFS explores the graph deeply before backtracking, whereas BFS explores the graph level by level using a queue.
