# Practical-03: Max Heap Sort

## Aim

To implement the Max Heap Sort algorithm and sort a given array of elements in ascending order.

---

## Objective

- To understand the concept of a Max Heap.
- To construct a Max Heap from an unsorted array.
- To apply the Heap Sort algorithm.
- To analyze the time and space complexity of Heap Sort.

---

## Theory

A **Max Heap** is a complete binary tree in which the value of every parent
node is greater than or equal to the values of its children.

For an array representation using 0-based indexing:

- Left Child = `2*i + 1`
- Right Child = `2*i + 2`
- Parent = `(i - 1) / 2`

In Max Heap, the largest element is always present at the root.

Heap Sort uses the following steps:

1. Build a Max Heap from the given array.
2. Swap the root (maximum element) with the last element.
3. Reduce the heap size by one.
4. Apply Max Heapify to restore the Max Heap property.
5. Repeat until all elements are sorted.

---

## Algorithm

### MAX-HEAPIFY(A, n, i)

1. Set `largest = i`.
2. Find the left child: `left = 2*i + 1`.
3. Find the right child: `right = 2*i + 2`.
4. If the left child is greater than `A[largest]`, update `largest`.
5. If the right child is greater than `A[largest]`, update `largest`.
6. If `largest != i`, swap the two elements.
7. Recursively apply Max Heapify to the affected subtree.

### HEAP-SORT(A)

1. Build a Max Heap from the array.
2. For `i = n-1` down to `1`:
   - Swap `A[0]` and `A[i]`.
   - Reduce heap size.
   - Apply Max Heapify on the root.
3. The array is sorted in ascending order.

---

## Program

```cpp
#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    // Build Max Heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Extract elements from heap
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);

        heapify(arr, i, 0);
    }
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    heapSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}
