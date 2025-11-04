class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int> res;
        int count = 0;

        vector<int> curr;


        for(int i = 0; i < k-1; i++){
            curr.push_back(nums[i]);
        }

        for(int i = 0; i <= nums.size()-k; i++){
            // cout << "iter" << endl;
            int back = k-1+i;
            curr.push_back(nums[back]);

            map<int, int> mp;
            priority_queue<pair<int, int>> pq;

            // cout << "CURR: " << endl;
            for(int n : curr){
                cout << n << " ";
                mp[n]++;
            }
            // cout << endl;

            // cout << "PQ PUSH: " << endl;
            for(auto p : mp){
                pq.push({p.second, p.first});
                // cout << p.second << " " << p.first << endl;
            }

            int count = 0;

            if(pq.size() < x){
                while(!pq.empty()){
                    count += pq.top().second*pq.top().first; 
                    pq.pop();
                }
                res.push_back(count);
                curr.erase(curr.begin());
                // cout << endl;
                continue;
            }

            // cout << "PQ: " << endl;
            for(int j = 0; j < x; j++){
                // cout << pq.top().second << " " << pq.top().first << endl;
                count += pq.top().second*pq.top().first;
                pq.pop();
            }
            // cout << endl;

            res.push_back(count);

            curr.erase(curr.begin());

        }

        return res;
        
    }
};