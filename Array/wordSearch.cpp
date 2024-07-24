class Solution {
public:
    bool exist(vector<vector<char>>& board, string& word) {
        bool ans = false;
        for(int j = 0; j < board.size(); j++) {
            for(int k = 0; k < board[0].size(); k++) {
                if(board[j][k] == word[0]) {
                    ans = ans || helper(board, word, j , k, 0);
                }
            }
        }
        return ans;
    }
    bool helper(vector<vector<char>>& board, string& word, int row , int col, int ind){
        if((row >= board.size()) || (col >= board[0].size())) return false;
        if(board[row][col] != word[ind]) return false;
        if(ind == word.size()-1) return true;
        char temp = board[row][col];
        board[row][col] = '#';
        bool found =  helper(board, word, row+1, col, ind+1) ||
        helper(board, word, row-1, col, ind+1) ||
        helper(board, word, row, col-1, ind+1) ||
        helper(board, word, row, col+1, ind+1);
        board[row][col] = temp;
        return found;
    }
};