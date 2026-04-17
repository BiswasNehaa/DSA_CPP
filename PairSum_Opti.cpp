#include<iostream>
using namespace std;

int main()
{
    int target=9;
    int arr[]= {2, 7, 11, 15};
    int i=0;
    int j=3; //n-1

    while(i<j)
    {
        int sum=arr[i]+arr[j];

        if(sum>target)
            j--;
        else if (sum< target)
            i++;
        else {
            cout<<arr[i]<<" "<<arr[j];
            break;
        }
    }
    return 0;
}