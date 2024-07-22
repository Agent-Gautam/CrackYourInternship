class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        for(pair p: mp) {
            if(p.second == 2) ans.push_back(p.first);
        }
        return ans;
    }
};