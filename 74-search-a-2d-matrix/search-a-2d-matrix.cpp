class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int up = 0, dw = matrix.size()-1, curr = (dw-up)/2, y;
        int l = 0, r = matrix[0].size()-1;
        bool flag = false;

        while(up <= dw){
            cout << curr << endl;
            if(target >= matrix[curr][0] && target <= matrix[curr][r]){
                // cout << matrix[curr][0] << endl;
                flag = true;
                y = curr;
                break;
            } else if (target < matrix[curr][0]){
                dw = curr-1;
                curr = (dw-up)/2+up;
            } else if (target > matrix[curr][r]){
                up = curr+1;
                curr = (dw-up)/2+up;
            }
        }

        if(!flag) return flag;
        
        curr = (r-l)/2;

        while (l <= r){
            // cout << l << " " << r << " " << curr << " " << matrix[y][curr] << endl;
            if(target == matrix[y][curr]) return flag = true;
            else if (target < matrix[y][curr]){
                // cout << "inhere" << endl;
                r = curr-1;
                curr = (r-l)/2+l;
            } else {
                l = curr+1;
                curr = (r-l)/2+l;
            }
        }


        return false;
    }
};