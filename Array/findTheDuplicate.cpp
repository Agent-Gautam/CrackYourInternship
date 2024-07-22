class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            int pos = abs(nums[i]);
            if(nums[pos] < 1) return pos;
            nums[pos] = -nums[pos];
        }
        return 0;
    }
};