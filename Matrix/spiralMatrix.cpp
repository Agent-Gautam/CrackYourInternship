class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if(matrix.size() == 0) return ans;
        spiral(matrix, ans, true, 0, matrix.size()-1, 0, matrix[0].size()-1);
        return ans;
    }

    void spiral(vector<vector<int>>& matrix, vector<int>& ans, bool dir, int n1, int n2, int m1, int m2){
        if(n1 > n2 || m1 > m2) return ;
        if(dir) {
            for(int i = m1; i <= m2; i++) {
                ans.push_back(matrix[n1][i]);
            }
            for(int j = n1+1; j <= n2; j++) {
                ans.push_back(matrix[j][m2]);
            }
            spiral(matrix, ans, !dir, n1+1, n2, m1, m2-1);
        }
        else {
            for(int k = m2; k >= m1; k--) {
                ans.push_back(matrix[n2][k]);
            }
            for(int l = n2-1; l >= n1; l--) {
                ans.push_back(matrix[l][m1]);
            }
            spiral(matrix, ans, !dir, n1, n2-1, m1+1, m2);
        }
    }
};