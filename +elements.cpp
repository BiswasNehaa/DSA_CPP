class Solution {
  public:
    int arraySum(int arr[], int size) {
        // Code here
        int sum=0;
        for(int i=0; i<=size-1;i++)
        {
            sum=sum+arr[i];
        }
        return sum;
    }
};