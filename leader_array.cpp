// Find the leader in an array
// a[]={17,18,7,5,9,3}

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {17, 18, 7, 5, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<arr[n-1]<<" "; 
    int max=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            cout<<max<<" ";
        }
    }
    return 0;
}