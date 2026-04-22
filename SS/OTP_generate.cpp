#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));  // Seed for randomness

    int otp = rand() % 9000 + 1000;  
    // ensures 4-digit number (1000–9999)

    cout << "Your OTP is: " << otp << endl;

    return 0;
}