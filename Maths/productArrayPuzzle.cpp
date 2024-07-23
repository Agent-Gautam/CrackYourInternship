class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        long long int product = 1;
        int zerocount = 0, zeroind = -1;
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) {
                zeroind = zeroind == -1 ? i : zeroind;
                zerocount++;
            }
            if(nums[i] != 0) product*=nums[i];
        }
        
        if(zerocount > 1) {
            vector<long long int> p(n, 0);
            return p;
        }
        else if(zerocount == 1) {
            vector<long long int> p(n,0);
            p[zeroind] = product;
            return p;
        }
        vector<long long int> p(n,product);
        for(int j = 0; j < n; j++) {
            p[j] /= nums[j];
        }
        return p;
    }
};