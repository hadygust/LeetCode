class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int count = 0;

        map<int, int> m;

        vector<int> res;

        for (int i = 0; i < A.size(); i++){
            m[A[i]]++;
            m[B[i]]++;
        
            if (A[i] == B[i]){
                if (m[A[i]] == 2) count++;
            } else {
                if (m[A[i]] == 2) count++;
                if (m[B[i]] == 2) count++;            
            }

            res.push_back(count);
        }

        return res;
    }
};