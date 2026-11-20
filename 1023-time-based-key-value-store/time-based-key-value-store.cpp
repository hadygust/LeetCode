class TimeMap {
private:
    unordered_map<string, vector<pair<int, string>>> m;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        if(m.find(key) == m.end()){
            return "";
        }

        auto & v = m[key];
        string res = "";

        int l = 0, r = v.size()-1;

        while (l <= r){
            int mid = (r+l)/2;

            if(v[mid].first <= timestamp){
                l = mid + 1;
                res = v[mid].second;
            } else if (v[mid].first > timestamp){
                r = mid - 1;
            }
        }

        return res;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */