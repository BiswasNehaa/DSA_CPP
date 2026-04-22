class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        // Handle edge cases for single-element arrays or boundaries
        if (n == 1) return nums[0];
        if (nums[0] != nums[1]) return nums[0];
        if (nums[n - 1] != nums[n - 2]) return nums[n - 1];

        int st = 1, end = n - 2;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            // 1. Check if mid is the unique element
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
                return nums[mid];
            }

            // 2. Decide which half to move to
            // If mid is even, its partner should be at mid + 1
            // If mid is odd, its partner should be at mid - 1
            if ((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || 
                (mid % 2 != 0 && nums[mid] == nums[mid - 1])) {
                // Pattern is still correct, single element is to the right
                st = mid + 1;
            } else {
                // Pattern is broken, single element is to the left
                end = mid - 1;
            }
        }

        return -1;
    }
};