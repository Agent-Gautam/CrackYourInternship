class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroes = 0, ones= 0;
        for(int i : nums) {
            if(i == 0) zeroes++;
            else if(i == 1) ones++;
        }
        for(int i = 0; i < zeroes; i++) {
            nums[i] = 0;
        }
        for(int j = zeroes; j < zeroes+ones; j++) {
            nums[j] = 1; 
        }
        for(int k = zeroes+ones; k < nums.size(); k++) {
            nums[k] = 2;
        }
    }
};