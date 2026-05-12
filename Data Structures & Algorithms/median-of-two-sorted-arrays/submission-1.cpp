class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        for(int i = 0; i < nums1.size(); i++){
            arr.push_back(nums1[i]);
        }
        for(int j = 0; j < nums2.size(); j++){
            arr.push_back(nums2[j]);

        }
        sort(arr.begin(),arr.end());
        int n = arr.size();
        if(n % 2 == 1){
            return arr[n/2];
        }

        double a = arr[n/2];
        double b = arr[(n/2)-1];
        return (a + b)/ 2.0;
    }
};
