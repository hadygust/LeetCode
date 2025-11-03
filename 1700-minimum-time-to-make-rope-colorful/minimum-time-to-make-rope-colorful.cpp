class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {

        int max = INT_MIN, sum = 0, maxsum = 0;;

        for(int i = 0; i < neededTime.size(); i++){
            sum += neededTime[i];

            if( colors[i] != colors[i+1]) {
                max = (neededTime[i] > max) ? neededTime[i] : max;
                maxsum += max;

                // cout << i << " " << "adding " << max << endl;

                max = INT_MIN;
                continue;
            }
            max = (neededTime[i] > max) ? neededTime[i] : max;
        }
        // cout << sum << " " << maxsum << endl;
        return sum - maxsum;
        
    }
};