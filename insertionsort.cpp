#include <iostream>
  using namespace std;

void insertionsort(int arr[],int n)
{int j,i,temp;
 for(i=1;i<n;i++){
    temp=arr[i];
   for(j=i-1;j>=0&&temp<arr[j];j--)
       arr[j+1]=arr[j];
         arr[j+1]=temp;
       }
}
int main()
{
    int n ;
   cout<<"enter no. of elements";
   cin>>n;
   int arr[n];
   cout<<"\n enter all elements";
     for (int i=0; i<n; ++i)
        cin>>arr[i];
    insertionsort(arr, n);
  cout << "Sorted array is \n";
     for (int i=0; i<n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
