// !/usr/bin/g++

// C++ program for implementation of Heap Sort
#include <iostream>
using namespace std;
 
void heapify(int arr[], int n, int i)
{
    int largest = i;  
    int l = 2*i + 1;
    int r = 2*i + 2;  
 
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < n && arr[r] >= arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
 
void heapSort(int arr[], int n)
{
int i;
    // Build heap (rearrange array)
    for ( i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    // One by one extract an element from heap
    for ( i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);
 
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
 
void printArray(int arr[], int n)
{
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
 
int main()
{
    int n;
    cin >> n;
    int arr[n], i;
    for (i = 0; i < n; i++)
    	cin >> arr[i];
    heapSort(arr, n);

    for (i = 0; i < n; i++)
    	cout << arr[i] << " " ;
    cout << endl;

}
