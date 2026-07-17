class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> rowSets;
        unordered_map<int, unordered_set<char>> colSets;
        unordered_map<int, unordered_set<char>> boxSets;

        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board.at(i).size(); ++j) {
                char cell = board.at(i).at(j);
                if (isdigit(cell)) {
                    if (rowSets[i].count(cell)) {
                        return false;
                    }

                    rowSets[i].insert(cell);

                    if (colSets[j].count(cell)) {
                        return false;
                    }

                    colSets[j].insert(cell);

                    int square_index = (i / 3) * 3 + (j / 3);
                    if (boxSets[square_index].count(cell)) {
                        return false;
                    }

                    boxSets[square_index].insert(cell);
                }
            }
        }

        return true;
    }
};
