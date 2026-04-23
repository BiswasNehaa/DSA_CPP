
/*Allocate books to students such that:

Each student gets at least one book
Books are assigned in contiguous order
Each book is assigned to only one student
The objective is to minimize the maximum number of pages assigned to a student
*/


#include <stdio.h>

// check if allocation is valid
int isValid(int arr[], int n, int m, int mid) {
    int students = 1;
    int pages = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > mid)
            return 0;

        if (pages + arr[i] > mid) {
            students++;
            pages = arr[i];

            if (students > m)
                return 0;
        } else {
            pages += arr[i];
        }
    }
    return 1;
}

// main function
int allocateBooks(int arr[], int n, int m) {
    if (m > n) return -1;

    int sum = 0, max = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    int st = max;
    int end = sum;
    int ans = -1;

    while (st <= end) {
        int mid = (st + end) / 2;

        if (isValid(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }

    return ans;
}

// driver code
int main() {
    int arr[] = {12, 34, 67, 90};
    int n = 4;
    int m = 2;

    printf("Minimum pages = %d", allocateBooks(arr, n, m));

    return 0;
}