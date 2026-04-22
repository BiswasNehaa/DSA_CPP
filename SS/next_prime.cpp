//check once many edge cases...


int nextPrime(int n) {
    int num = n + 1;

    while (true) {
        // 1. ALWAYS reset the flag for the new number
        bool is_prime = true;

        // 2. Handle numbers less than 2 (not prime)
        if (num <= 1) {
            is_prime = false;
        } else {
            // 3. Check for divisors up to sqrt(num)
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    is_prime = false; 
                    break; // 4. OPTIMIZATION: Stop looking once a factor is found
                }
            }
        }

        // 5. If it survived the loop, it's prime!
        if (is_prime) {
            return num;
        }

        // 6. Try the next number
        num++;
    }
}