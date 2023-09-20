#include <vector>

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right){
            int middle = (left + right)/2;

            if (nums[middle] == target) {
                return middle;
            }

            if (target > nums[middle]) {
                left = middle + 1;
            } else {
                right = middle - 1;
            }
        }
         return -1;
    }
};