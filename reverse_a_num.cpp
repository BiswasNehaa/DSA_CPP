#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int ans=0;
    while(n>0){
        int lastdigit=n%10;
        ans=ans*10+lastdigit;
        n=n/10;
    }
    cout<<"Reversed number: "<<ans;
}