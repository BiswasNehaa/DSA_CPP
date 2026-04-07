//used to find multiples for bigger numbers

#include <iostream>
#include <cmath>
using namespace std;

long long karatsuba(long long x, long long y) {
    // Base case
    if (x < 10 || y < 10)
        return x * y;

    // Find size of numbers
    int n = max(to_string(x).length(), to_string(y).length());
    int m = n / 2;

    // Split numbers
    long long high1 = x / pow(10, m);
    long long low1  = x % (long long)pow(10, m);
    long long high2 = y / pow(10, m);
    long long low2  = y % (long long)pow(10, m);

    // 3 recursive calls
    long long z0 = karatsuba(low1, low2);
    long long z1 = karatsuba((low1 + high1), (low2 + high2));
    long long z2 = karatsuba(high1, high2);

    // Combine results
    return (z2 * pow(10, 2 * m)) + ((z1 - z2 - z0) * pow(10, m)) + z0;
}

int main() {
    long long x = 1234, y = 5678;

    cout << "Product: " << karatsuba(x, y);

    return 0;
}