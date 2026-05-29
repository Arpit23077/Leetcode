class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            int k=nums[i];
            int sum=0;
            while(k>0){
                int j=k%10;
                sum=sum+j;
                k=k/10;
            }
            mini=min(mini,sum);
        }
        return mini;
    }
};