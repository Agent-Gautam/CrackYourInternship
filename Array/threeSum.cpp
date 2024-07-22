class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int i = 0, j = 1, k = n-1;
        for(int i = 0; i < n; i++) {
            if(i != 0 && nums[i] == nums[i-1]) continue;
            j = i + 1;
            k = n - 1;
            while(j < k) {
                int cursum = nums[i] + nums[j] + nums[k];
                if(cursum == 0) {
                    ans.push_back({nums[i], nums[j], nums[k]}) ;
                    j++;
                    k--;
                    while(j < k && nums[j] == nums[j-1]) j++;
                    while(j < k && nums[k] == nums[k+1]) k--;
                }
                else if(cursum > 0) k--;
                else j++;
            }
        }
        return ans;
    }
};