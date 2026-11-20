class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int s1 = nums1.size();
        int s2 = nums2.size();
        
        if(s1 > s2){
            return findMedianSortedArrays(nums2, nums1);
        }

        int l = 0;
        int r = s1;
        // cout << l << " " << r << endl << endl;

        while(l <= r){
            // cout << l << " " << r << endl;

            int mid = (r + l) / 2;
            int mid2 = (s1 + s2 + 1) / 2 - mid;

            int mal1 = (mid == 0) ? INT_MIN : nums1[mid-1];
            int mal2 = (mid2 == 0) ? INT_MIN : nums2[mid2-1];
            int mir1 = (mid == s1) ? INT_MAX : nums1[mid];
            int mir2 = (mid2 == s2) ? INT_MAX : nums2[mid2];

            // cout << mal1 << " " << mid << " " << mir1 << " " << endl;
            // cout << mal2 << " " << mid2 << " " << mir2 << " " << endl;
            // cout << endl;

            if(mal1 <= mir2 && mal2 <= mir1){
                if((s1 + s2) % 2 == 0){
                    return ((double)(max(mal1, mal2) + min(mir1, mir2)) / 2);
                } else {
                    return max(mal1, mal2);
                }
            } else if (mal2 >= mir1) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        return 0;
    }
};