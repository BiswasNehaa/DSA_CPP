#include<iostream>
using namespace std;

int main()
{
    int n=5;
    int arr[]={1,2,3,4,5};
    int i;
    int maxSum=0;

    for(i=0;i<n;i++)
    {
        int currSum=0;
        for(int j=i;j<n;j++)
        {
            currSum+=arr[j];
            maxSum=max(maxSum,currSum);

            if(currSum<0)
                currSum=0;
        }
    }
    cout<<"Max Sum is: "<<maxSum;
}