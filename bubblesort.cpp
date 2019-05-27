#include <iostream>
  using namespace std;

void bubblesort(int arr[],int n)
{int round,i,temp;
 for(round=1;round<=n-1;round++)
   for(i=0;i<=n-1-round;i++)
       if(arr[i]>arr[i+1])
       { temp=arr[i];
         arr[i]=arr[i+1];
         arr[i+1]=temp;
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
    bubblesort(arr, n);
  cout << "Sorted array is \n";
     for (int i=0; i<n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
