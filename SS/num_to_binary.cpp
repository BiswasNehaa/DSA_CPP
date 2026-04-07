#include <iostream>
using namespace std;

int main() {
    int a = 10; 
    
    if (a == 0) cout << 0; 

    while (a > 0) {
        int rem = a % 2;
        cout << rem << " ";
        a = a / 2;
    }
    
    return 0;
}