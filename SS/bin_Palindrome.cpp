#include <iostream>
using namespace std;

bool isBinaryPalindrome(int n) {
    int rev = 0, temp = n;

    // Reverse binary
    while (temp > 0) {
        rev = (rev << 1) | (temp & 1);
        temp = temp >> 1;
    }

    return (rev == n);
}

int main() {
    int num = 9;

    if (isBinaryPalindrome(num))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}