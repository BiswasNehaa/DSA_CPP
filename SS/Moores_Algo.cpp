#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 1, 1, 1};
    int n = 6;
    
    int candidate = 0;
    int votes = 0;

    // Phase 1: Find the candidate
    for(int i = 0; i < n; i++) {
        if(votes == 0) {
            candidate = arr[i];
            votes = 1;
        }
        else if(arr[i] == candidate) {
            votes++;
        }
        else {
            votes--;
        }
    }

    // Phase 2: Verify (Optional if a majority is guaranteed)
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == candidate) count++;
    }

    if(count > n/2) {
        cout << "The Majority Element is: " << candidate << endl;
    } else {
        cout << "No Majority Element exists." << endl;
    }

    return 0;
}