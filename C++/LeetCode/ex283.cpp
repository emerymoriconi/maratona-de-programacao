#include <vector>

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int indexLastZero = 0;
        for (int j=0; j<nums.size(); j++){
            if (nums[j] == 0){
                indexLastZero = j;
            }
            break;
        }

        for(int i=0; i<nums.size(); i++){
            if (nums[i] != 0) {
                int aux = nums[i];
                nums[i] = nums[indexLastZero];
                nums[indexLastZero] = aux;
                indexLastZero++;
            }
        }
    }
};