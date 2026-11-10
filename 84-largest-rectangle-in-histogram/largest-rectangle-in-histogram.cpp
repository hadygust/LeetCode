class Solution {
public:
    int largestRectangleArea(vector<int>& hs) {
        
        // vector<int> mxs;
        int res = 0;

        for(int i = 0; i < hs.size(); i++){

            int curr = i-1;
            int n = hs[i];

            while(curr >= 0){
                if(hs[curr] >= hs[i]){
                    n += hs[i];
                } else {
                    break;
                }
                curr--;
            }

            curr = i+1;
            while(curr < hs.size()){
                if(hs[curr] >= hs[i]){
                    n += hs[i];
                } else {
                    break;
                }
                curr++;
            }


            while(i < hs.size()-1 && hs[i] == hs[i+1]) i++;
            
            // cout << n << endl;
            res = max(res, n);
        }

        return res;
    }
};