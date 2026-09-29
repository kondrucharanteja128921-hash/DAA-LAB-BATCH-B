# Practical-02: Linear and Binary Search

## Aim

To implement **Linear Search** and **Binary Search** algorithms for finding an element in an array.

## Objective

To understand and implement:
- Linear Search
- Binary Search
- Difference between Linear Search and Binary Search
- Time complexity of both searching techniques

---

## 1. Linear Search

Linear Search checks each element of the array one by one until the required element is found.

### Algorithm

1. Start from the first element of the array.
2. Compare the current element with the search element.
3. If both are equal, return the position of the element.
4. Otherwise, move to the next element.
5. Continue until the element is found or the array ends.
6. If the element is not found, display "Element not found".

### Pseudocode

```text
LINEAR-SEARCH(array, n, key)

for i = 0 to n-1
    if array[i] == key
        return i

return -1
