class Solution {
public:
    int maxArea(vector<int>& height) {

        // map<int, vector<int>> m;

        // for(int i =0; i < height.size(); i++){
        //     m[height[i]].push_back(i);
        // }

        // sort(height.begin(), height.end());

        int res = 0;

        int l = 0, r = height.size()-1;

        while(l < r){
            int min = (height[l] < height[r]) ? height[l] : height[r];
            int v = min * (r-l);
            res = (v > res) ? v : res;

            if(height[l] > height[r]) r--;
            else if(height[l] < height[r]) l++;
            else l++;
        }

        return res;
        
    }
};