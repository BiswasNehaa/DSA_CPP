#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 1) {
        cout << "False";
        return 0; // Exit early for 0 and 1
    }

    bool is_prime = true; // Assume it's prime initially

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            is_prime = false; // Found a divisor!
            break;            // No need to check other numbers
        }
    }

    if (is_prime) 
        cout << "True";
    else 
        cout << "False";

    return 0;
}