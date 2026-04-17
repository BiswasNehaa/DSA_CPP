#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,2,1,1,1};

    for(int i=0;i<6;i++)
    {
        int freq=1;  //1st time is counted
        for( int j=i+1;j<6;j++)
        {
            if(arr[i]==arr[j])
                freq ++;
        }

        if(freq >3) 
        {

        // (n/2) times
            cout<<arr[i];
            break;
        }
            
    }
}



// Time Complexity : O(n2)