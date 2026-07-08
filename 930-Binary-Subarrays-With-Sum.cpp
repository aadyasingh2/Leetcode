class Solution {
public:
    int lessthanequalto(vector<int>& nums,int k){
        if (k < 0) return 0; 
        int l=0,r=0,n=nums.size(),sum=0,cnt=0;
        while(r<n){
            sum+=nums[r];
            while(sum>k){
                sum-=nums[l];
                l++;
            }
            cnt+=r-l+1;
            r++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return lessthanequalto(nums,goal)-lessthanequalto(nums,goal-1);
    }
};