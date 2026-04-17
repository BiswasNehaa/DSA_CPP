class Solution {
  public:
    vector<int> cppOperators(int A, int B) {
        vector<int> res;
        
        // 1. Addition
        res.push_back(A + B);
        
        // 2. Multiplication
        res.push_back(A * B);
        
        // 3. Subtraction (B - A if B > A, else A - B)
        if (B > A) {
            res.push_back(B - A);
        } else {
            res.push_back(A - B);
        }
        
        // 4. Division (B / A if B > A, else A / B)
        if (B > A) {
            res.push_back(B / A);
        } else {
            res.push_back(A / B);
        }
        
        return res; // Finally, return the vector
    }
};