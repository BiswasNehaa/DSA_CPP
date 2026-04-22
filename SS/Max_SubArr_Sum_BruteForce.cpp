#include<iostream>
using namespace std;

int main()
{
    int n=5;
    int arr[]={1,2,3,4,5};
    int st,end,i;
    int maxSum=0;

    for(st=0;st<n;st++)
    {
        int currSum=0;
        for(end=st;end<n;end++)
        {
            currSum+=arr[end];
            maxSum=max(maxSum,currSum);
        }
    }
    cout<<"Max Sum is: "<<maxSum;
}