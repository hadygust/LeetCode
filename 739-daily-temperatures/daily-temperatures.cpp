class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {

        vector<int> res(temp.size());
        stack<int> s;

        for(int i = 0; i < temp.size(); i++){
            
            while(!s.empty() && temp[i] > temp[s.top()]){
                res[s.top()] = i-s.top();
                s.pop();
            }
            
            s.push(i);

        }

        return res;
        
    }
};