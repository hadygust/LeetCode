class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int> res;
        vector<int> curr;
        
        for(int i = 0; i < k-1; i++){
            curr.push_back(nums[i]);
        }

        for(int i = 0; i <= nums.size()-k; i++){
            int back = k-1+i;
            curr.push_back(nums[back]);

            map<int, int> mp;
            priority_queue<pair<int, int>> pq;

            for(int n : curr){
                cout << n << " ";
                mp[n]++;
            }

            for(auto p : mp){
                pq.push({p.second, p.first});
            }

            int count = 0;

            if(pq.size() < x){
                while(!pq.empty()){
                    count += pq.top().second*pq.top().first; 
                    pq.pop();
                }
                res.push_back(count);
                curr.erase(curr.begin());
                continue;
            }

            for(int j = 0; j < x; j++){
                count += pq.top().second*pq.top().first;
                pq.pop();
            }

            res.push_back(count);
            curr.erase(curr.begin());

        }

        return res;
        
    }
};