class Solution {
  public:
    int BasicDataType(string s) {
        int n = s.length();

        // 1. Check for Character
        if (n == 1 && (s[0] < '0' || s[0] > '9')) {
            return 1;
        }

        // 2. Check for Decimal Point
        size_t dotPos = s.find('.');
        if (dotPos != string::npos) {
            int precision = n - 1 - dotPos;
            // Based on our testing: 
            // precision > 5 digits after dot = double (8)
            if (precision > 5) return 8;
            else return 4;
        }

        // 3. Default to Integer
        return 4; 
    } // This closes the BasicDataType function
};    // This closes the Solution class