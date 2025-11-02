class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> board(m, vector<int>(n));
        map<pair<int, int>, int> mem;

        for(int i = 0; i < guards.size(); i++){
            board[guards[i][0]][guards[i][1]] = 1;
            mem[{guards[i][0], guards[i][1]}]++;
        }

        for(int i = 0; i < walls.size(); i++){
            board[walls[i][0]][walls[i][1]] = 2;
        }

        for(auto g : guards){
            int i = g[0];
            int j = g[1];
            while(i >= 0){
                if(board[i][j] == 2) break;
                if(mem.find({i,j}) != mem.end() && (i != g[0] || j != g[1])) break;
                board[i][j] = 1;
                i--;
            }

            i = g[0];
            j = g[1];
            while(i < m){
                if(board[i][j] == 2) break;
                if(mem.find({i,j}) != mem.end() && (i != g[0] || j != g[1])) break;
                board[i][j] = 1;
                i++;
            }

            i = g[0];
            j = g[1];
            while(j >= 0){
                if(board[i][j] == 2) break;
                if(mem.find({i,j}) != mem.end() && (i != g[0] || j != g[1])) break;
                board[i][j] = 1;
                j--;
            }

            i = g[0];
            j = g[1];
            while(j < n){
                if(board[i][j] == 2) break;
                if(mem.find({i,j}) != mem.end() && (i != g[0] || j != g[1])) break;
                board[i][j] = 1;
                j++;
            }
        }

        int res = 0;
        for(int i =0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
                if(board[i][j] == 0) res++;
            }
        }

        return res;
    }

};