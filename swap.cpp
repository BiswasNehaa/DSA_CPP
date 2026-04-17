//swap given two numbers a=2, b=4

#include<iostream>
using namespace std;
int main()
{
    int a=2, b=4;
    a=a+b; 
    b=a-b; 
    a=a-b; 

    cout<<"a: "<<a<<" b: "<<b;
}

#include<iostream>
using namespace std;

int main()
{
    int a=2, b=4;
    int temp=a;
    a=b;
    b=temp; 
    cout<<"a: "<<a<<" b: "<<b;
}

