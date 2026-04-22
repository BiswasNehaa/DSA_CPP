#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); 

    char hexChars[] = "0123456789ABCDEF";
    string otp = "";

    for(int i = 0; i < 4; i++) {
        int index = rand() % 16;  
        otp += hexChars[index];
    }

    cout << "Hex OTP is: " << otp << endl;

    return 0;
}