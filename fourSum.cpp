class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();
        if (n < 4) return ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 3; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            for (int j = i + 1; j < n - 2; ++j) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                int k = j + 1, l = n - 1;
                long targetSum = static_cast<long>(target) - nums[i] - nums[j];

                while (k < l) {
                    long currentSum = nums[k] + nums[l];
                    if (currentSum == targetSum) {
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        ++k;
                        --l;
                        while (k < l && nums[k] == nums[k - 1]) ++k;
                        while (k < l && nums[l] == nums[l + 1]) --l;
                    } else if (currentSum < targetSum) {
                        ++k;
                    } else {
                        --l;
                    }
                }
            }
        }
        return ans;
    }
};
