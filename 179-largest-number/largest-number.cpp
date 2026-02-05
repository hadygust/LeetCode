class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> v;

        string a = "3";
        string b = "30";

        cout << (a > b) << endl;

        for(auto n : nums){
            v.push_back(to_string(n));
        }

        // sort(v.begin(), v.end());
        quickSort(v, 0, v.size()-1);

        if(v[0] == "0") return "0";

        string res;
        for(auto s : v){
            cout << s;
            res += s;
        }

        return res;
    }

    void quickSort(vector<string>& v, int left, int right){
        if(left >= right) return;

        int pivot = partition(v, left, right);

        quickSort(v, left, pivot-1);
        quickSort(v, pivot+1, right);

    }

    int partition(vector<string>& v, int left, int right){
        string pivot = v[right];

        int high = left;

        for(int i = left; i < right; i++){
            if(v[i]+pivot > pivot+v[i]){
                swap(v[i], v[high]);
                high++;
            }
        }

        swap(v[right], v[high]);
        return high;
    }

};