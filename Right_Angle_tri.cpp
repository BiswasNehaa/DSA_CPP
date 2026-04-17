void triangle(int s) {
    for(int i = 1; i <= s; i++) {
        for(int j = 1; j <= i; j++) {
            // 1. First column (j==1)
            // 2. Diagonal/Hypotenuse (j==i)
            // 3. Last row/Base (i==s)
            if(j == 1 || j == i || i == s) {
                cout << "* ";
            } else {
                cout << "  "; // Must be two spaces to match "* "
            }
        }
        cout << endl;
    }
}