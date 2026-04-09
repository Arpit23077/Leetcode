class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1,mid,ans;
        while(s<=e){
            mid=s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[0]<=nums[mid]){
                if(nums[s]<=target && nums[mid]>=target){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else{
                if(nums[mid]<target && nums[e]>=target){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
        return -1;    
    }
};