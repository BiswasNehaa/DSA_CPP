void difference(int n1, int n2) {
    // 1. Calculate the difference once
    int diff = n1 - n2; 
    
    // 2. Multiply that difference by i
    for (int i = 1; i <= 10; i++) {
        cout << diff * i << " ";
    }
}





2nd:

// User function Template for C++

void difference(int n1, int n2) {

    // Write your code here
    for (int i=1; i<=10;i++)
    {
        int a=n1*i;
        int b=n2*i;
        cout<<a-b<<" ";
    }
}