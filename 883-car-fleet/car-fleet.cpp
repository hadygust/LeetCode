class Solution {
public:

    int carFleet(int target, vector<int>& pos, vector<int>& sp) {
        if(pos.size() == 0) return 0;
        if(pos.size() == 1) return 1;

        set<pair<int, int>> cars;

        for(int i = 0; i < pos.size(); i++){
            cars.insert({pos[i], sp[i]});
        }

        stack<double> st;

        for(auto i : cars){
            double ttf = (static_cast<double>(target - i.first)/i.second);

            while (!st.empty() && st.top() <= ttf){
                st.pop();
            }

            st.push(ttf);
            // cout << i.first << " " << i.second << " " << ttf << endl;
        }

        return st.size();
    }
};