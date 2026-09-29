# Practical-07: Making Change using Dynamic Programming

## Aim
To implement the **Making Change problem** using the **Dynamic Programming** technique.

## Objective
To find the minimum number of coins required to make a given amount using a set of available coin denominations.

## Problem Statement
Given a set of coin denominations and a target amount, determine the minimum number of coins needed to make the target amount.

### Example
Coins: `{1, 2, 5, 10}`  
Amount: `18`

Minimum coins required:

`10 + 5 + 2 + 1 = 18`

Therefore, the minimum number of coins is **4**.

## Algorithm

1. Read the available coin denominations.
2. Read the target amount.
3. Create a DP array `dp[]`.
4. Set `dp[0] = 0` because zero coins are required to make amount 0.
5. Initialize all other values to a large value.
6. For every amount from `1` to the target amount:
   - Check every available coin.
   - If the coin value is less than or equal to the current amount, update:
     `dp[amount] = min(dp[amount], dp[amount - coin] + 1)`
7. The value `dp[target]` gives the minimum number of coins required.
8. Display the result.

## Dynamic Programming Approach

The problem is divided into smaller subproblems.

For each amount `i`, we calculate the minimum number of coins needed to make `i`.

### Recurrence Relation

```text
dp[i] = min(dp[i], dp[i - coin] + 1)
