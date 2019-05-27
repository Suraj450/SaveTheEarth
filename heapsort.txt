// C++ program for sorting using Heapsort
#include <iostream>
  using namespace std;
// for heapify a subtree  node i
void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2*i + 1; // left  child= 2*i + 1
    int r = 2*i + 2; // right child = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        // use recursion to fix the change in heap
        heapify(arr, n, largest);
    }
}

// main function to  heapsort
void heapSort(int arr[], int n)
{
    // Build heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one take an element from heap
    for (int i=n-1; i>=0; i--)
    {
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

// Driver program
int main()
{
    int n ;
   cout<<"enter no. of elements";
   cin>>n;
   int arr[n];
   cout<<"\n enter all elements";
     for (int i=0; i<n; ++i)
        cin>>arr[i];
    heapSort(arr, n);
  cout << "Sorted array is \n";
     for (int i=0; i<n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
