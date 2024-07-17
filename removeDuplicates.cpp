class Solution{
public:
	string removeDuplicates(string str) {
	    unordered_map<char, int> mp;
	    string ans;
	    for(char s: str) {
	        mp[s]++;
	    }
	    for(char s: str) {
	        if(mp[s] > 0) {
	            ans+=s;
	            mp[s] = 0;
	        }
	    }
	    return ans;
	}
};