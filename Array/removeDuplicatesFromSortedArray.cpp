class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1, cur = 1, pre = nums[0];
        while(i < nums.size()) {
            if(nums[i] == pre) i++;
            else {
                nums[cur] = nums[i];
                pre = nums[i];
                i++;
                cur++;
            }
        }
        return cur;
    }
};