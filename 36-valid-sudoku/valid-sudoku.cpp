class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> box[3][3];

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.') continue;

                char val = board[i][j];

                if(rows[i].count(val) || cols[j].count(val)
                    || box[i/3][j/3].count(val)){
                    return false;
                }

                rows[i].insert(val);
                cols[j].insert(val);
                box[i/3][j/3].insert(val);
            }
        }

        return true;
    }
};