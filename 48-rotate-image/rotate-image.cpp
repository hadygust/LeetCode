class Solution {
public:

    /*
        1 2 3
        4 5 6
        7 8 9

        1
         
         
    */

    void transpose(vector<vector<int>>& m){
        for (int i = 0; i < m.size(); i++){
            for (int j = 0; j < i+1; j++){
                swap(m[i][j], m[j][i]);
                cout << m[i][j] << " " << m[j][i] << endl;
            }
        }
    }

    void rotateRow(vector<vector<int>>& m){

        for (int i = 0; i < m.size(); i++){
            int l = 0, r = m.size()-1;

            while (l < r){

                swap(m[i][l], m[i][r]);

                l++;
                r--;
            }
        }
    }

    void printMtx(vector<vector<int>>& m){
        for (int i = 0; i < m.size(); i++){
            for (int j = 0; j < m.size(); j++){
                cout << m[i][j] << " ";
            }
            cout << endl;
        }
    }

    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        // printMtx(matrix);
        rotateRow(matrix);
    }
};