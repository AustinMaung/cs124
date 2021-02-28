#include <iostream>
using namespace std;
// Functions: heapify() heap_sort() print_array() main()
// Description: simple code example of heap sort algorithm
// Programmer: Austin Maung
// Date: 2/20/2021
// Version: 1.0
// Hardware: HP Pavilion
// Software: Windows 10
// Compiles under Visual Studio Code
 
// n is size of array, i is current index being heapified
void heapify(int arr[], int n, int i)
{
    int largest = i; //currently set to the root node
    int left = 2 * i + 1;
    int right = 2 * i + 2;
 
    // check if left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;
 
    // check if right child is larger than largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;
 
    // check if largest is also not the root
    if (largest != i) {
        swap(arr[i], arr[largest]);
 
        // recursively heapify to check the next 
        // level of nodes up the tree
        heapify(arr, n, largest);
    }
}
 
// main function to do heap sort
void heap_sort(int arr[], int n)
{
    // build the heap, rearanging array
    // starts around the middle at bottom level of sub tree
    // before leaf nodes
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    // extracts and places max element at the end, then reheapify
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
 
// helper function to print array
void print_array(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
 
int main()
{
    int const SIZE = 6;
    int arr[SIZE] = { 12, 11, 13, 5, 6, 7 };
    cout << "Array before being sorted:" << endl;
    print_array(arr, SIZE);
    heap_sort(arr, SIZE);
    cout << "Array after being sorted: tests" << endl;
    print_array(arr, SIZE);
}
/*
Array before being sorted:
12 11 13 5 6 7
Array after being sorted:
5 6 7 11 12 13
*/