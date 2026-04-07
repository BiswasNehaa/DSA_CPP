//'a' is 97
//'A' is 65

#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s= "bangalore";
    for (int i = 0; i < s.length(); i=i+2) {
        
        if (s[i] >= 97 && s[i] <= 122)  //char is lowercase
        {
            s[i] = s[i] - 32; //move to uppercase
        }
    }

    cout << s << endl; 
    return 0;
}
