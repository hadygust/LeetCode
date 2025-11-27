class Solution {
public:
    int trap(vector<int>& height) {

        int max = 0, maxIdx = 0;

        for (int i = 0; i < height.size(); i++){
            if(height[i] > max){
                max = height[i];
                maxIdx = i;
            }
        }

        int res = 0;
        int lastHigh = 0;

        for(int i = 0 ; i <= maxIdx; i++) {
            if(height[i] > lastHigh) {
                lastHigh = height[i];
                continue;
            }
            res += lastHigh-height[i];
        }

        lastHigh = 0;
        for(int i = height.size()-1; i >= maxIdx; i--) {
            if(height[i] > lastHigh) {
                lastHigh = height[i];
                continue;
            }
            res += lastHigh-height[i];
        }

        return res;
        
    }
};