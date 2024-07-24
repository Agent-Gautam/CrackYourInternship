class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = 0, r = 1;
        while(r < nums.size()) {
            if(nums[l] != 0) {
                l++; r++;
            }
            else if(nums[r] != 0) {
                nums[l] = nums[r];
                nums[r] = 0;
                l++; r++;
            }
            else r++;
        }
    }
};