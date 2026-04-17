#include <numeric>
// ...
int result = std::gcd(48, 18);



#include <iostream>
using namespace std;

int findGCD(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    cout << "GCD of 48 and 18 is: " << findGCD(48, 18); // Output: 6
    return 0;
}




/* Euclidean Algorithm for GCD
Dry Run: GCD of 48 and 18

    Step 1: a=48,b=18

        48÷18=2 with remainder 12.

    Step 2: a=18,b=12

        18÷12=1 with remainder 6.

    Step 3: a=12,b=6

        12÷6=2 with remainder 0.

    Step 4: b is now 0. The current a is 6.

    Result: 6 is the GCD.

    */