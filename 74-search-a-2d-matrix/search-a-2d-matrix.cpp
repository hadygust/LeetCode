class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int x;

        int t = 0, b = matrix.size()-1;

        while (true){
            int mid = (t+b)/2;
            if(target >= matrix[mid][0] && (mid == b || target < matrix[mid+1][0])){
                x = mid;
                break;
            } else if (target < matrix[mid][0]){
                if(b == mid) return 0;
                b = mid;
            } else {
                if(t == mid && t == b){
                    return 0;
                } else if (t == mid){
                    t = b;
                } else {
                    t = mid;
                }
            }
        }

        return binary_search(matrix[x].begin(), matrix[x].end(), target);
    }
};