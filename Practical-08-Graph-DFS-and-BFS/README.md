# Practical-08: Graph DFS and BFS

## Aim
To implement **Depth First Search (DFS)** and **Breadth First Search (BFS)** for graph traversal.

## Objective
To understand and implement the two basic graph traversal techniques:
- Depth First Search (DFS)
- Breadth First Search (BFS)

## Problem Statement
Given a graph and a starting vertex, traverse all the reachable vertices using **DFS** and **BFS** algorithms.

## Graph Traversal

Graph traversal means visiting all the vertices of a graph systematically.

The two common methods are:

1. **DFS – Depth First Search**
2. **BFS – Breadth First Search**

---

## 1. Depth First Search (DFS)

DFS visits a vertex and then continues as deeply as possible along each branch before backtracking.

DFS can be implemented using:
- Recursion
- Stack

### DFS Algorithm

1. Start from the given vertex.
2. Mark the vertex as visited.
3. Display the vertex.
4. Visit each adjacent unvisited vertex recursively.
5. Continue until all reachable vertices are visited.

### DFS Pseudocode

```text
DFS(vertex)

mark vertex as visited
print vertex

for each adjacent vertex:
    if adjacent vertex is not visited:
        DFS(adjacent vertex)
