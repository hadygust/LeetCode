class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        vector<vector<char>> row(9), col(9);
        vector<map<char, int>> sq(9);
        
        for (int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
                cout << i << " " << j << " " << board[i][j] << endl;

                row[i].push_back(board[i][j]);
                col[j].push_back(board[i][j]);

                int pos, posx, posy;
                if(j < 3) posx = 1;
                else if(j < 6) posx = 2;
                else posx = 3;

                if(i < 3) posy = 0;
                else if(i < 6) posy = 3;
                else posy = 6;

                pos = posx + posy;

                sq[pos-1][board[i][j]]++;

            }
        }

        cout << "ROW: "; 
        for(auto x : row){
            for(auto y : x){
                cout << y << " ";
            }
            cout << endl;
        }

        cout << "COL: "; 
        for(auto x : col){
            for(auto y : x){
                cout << y << " ";
            }
            cout << endl;
        }
        
        cout << "3x3: "; 
        for(auto x : sq){
            for(auto y : x){
                cout << y.first << " " << y.second << endl;
            }
            cout << endl;
        }

        for (int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){

                if(board[i][j] == '.') continue;

                for(int k = 0; k < row[i].size(); k++){
                    if(k != j){
                        if(row[i][k] == board[i][j]) return false;
                    }

                    if (k != i){
                        if(col[j][k] == board[i][j]) return false;
                    }
                }

                int pos, posx, posy;
                if(j < 3) posx = 1;
                else if(j < 6) posx = 2;
                else posx = 3;

                if(i < 3) posy = 0;
                else if(i < 6) posy = 3;
                else posy = 6;

                pos = posx + posy;

                cout << pos << " " << board[i][j] << " = " << sq[pos-1][board[i][j]] << endl;

                if(sq[pos-1][board[i][j]] > 1){
                    return false;
                }


            }
        }

        return true;

    }
};