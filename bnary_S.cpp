#include<iostream>
using namespace std;

int main()
{
    int arr[]={-1,0,3,4,5,9,12};
    int s=sizeof(arr)/sizeof(arr[0]);
    int target=12;

    int start=0;
    int end=s-1;

    while(start<=end)
    {
        int mid=(start+end)/2;

        if(target>arr[mid])
        {
            start=mid+1;
        }
        else if(target<arr[mid])
        {
            end=mid-1;
        }
        else
        {
            cout<<mid;
            return 0;
        }
    }

}
