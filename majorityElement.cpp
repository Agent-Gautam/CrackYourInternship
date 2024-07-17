class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size()/2;
        map<int,int> mp;
        for(int i : nums) {
            mp[i]++;
        }
        cout << n ;
        for(auto pair: mp) {
            if(pair.second > n) return pair.first;
        }
        return -1;
    }
};