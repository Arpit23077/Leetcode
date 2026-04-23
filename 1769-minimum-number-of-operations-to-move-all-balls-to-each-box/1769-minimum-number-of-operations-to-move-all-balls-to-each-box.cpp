class Solution {
public:
    vector<int> minOperations(string nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(nums[j]=='1'){
                    count+=abs(i-j); 
                }
            }
            ans[i]=count;
        }
        return ans;    
    }
};