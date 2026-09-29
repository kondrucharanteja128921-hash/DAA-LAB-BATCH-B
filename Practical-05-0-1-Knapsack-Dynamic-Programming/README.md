# Practical-05: 0/1 Knapsack Using Dynamic Programming

## Aim

To implement the **0/1 Knapsack problem** using the **Dynamic Programming**
technique and find the maximum profit that can be obtained without exceeding
the given knapsack capacity.

---

## Objective

- To understand the 0/1 Knapsack problem.
- To understand the concept of Dynamic Programming.
- To construct a Dynamic Programming table.
- To find the maximum possible profit.
- To analyze the time and space complexity of the algorithm.

---

## Theory

The **0/1 Knapsack Problem** is a well-known optimization problem.

We are given:

- `n` items.
- A weight for each item.
- A profit/value for each item.
- A knapsack with a maximum capacity.

For every item, there are only two choices:

1. **Include** the item in the knapsack.
2. **Do not include** the item in the knapsack.

An item cannot be partially selected. Therefore, it is called **0/1 Knapsack**.

- `0` → Item is not selected.
- `1` → Item is selected.

---

## Problem Definition

Given `n` items with weights and profits, select items such that:

- Total weight does not exceed the knapsack capacity.
- Total profit is maximum.

---

## Dynamic Programming Formula

Let:

```text
DP[i][w]
