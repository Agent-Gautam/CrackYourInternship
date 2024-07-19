class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i = 0; i < haystack.size(); i++ ){
            int ind = i; bool found = true;
            for(int j = 0; j < needle.size(); j++) {
                if(haystack[ind] != needle[j]) {
                    found = false;
                    break;
                }
                ind++;
            }
            if(found) return i;
        }
        return -1;
    }
};