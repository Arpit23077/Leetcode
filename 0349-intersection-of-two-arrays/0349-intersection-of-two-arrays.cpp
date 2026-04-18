class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());
        vector<int> nums;
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(nums1[i]==nums2[j] && s.count(nums1[i])){
                    nums.push_back(nums1[i]);
                    s.erase(nums1[i]);
                }
            }
        }
        return nums;
    }
};