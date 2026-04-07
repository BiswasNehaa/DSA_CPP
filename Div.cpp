#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%3==0 && n%5==0)
    {
        cout<<"HiHello";
    }
    else if(n%5==0)
    {
        cout<<"Hello";
    }
    else if (n%3==0)
    {
        cout<<"HiHello";
    }
    else
    {
        cout<<"Invalid";
    }
}
