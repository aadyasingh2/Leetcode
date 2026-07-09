class Solution {
public:
    inline int helper(vector<int>& nums,int k){
        int number=0;
        int n=nums.size();
        int l=0,r=0;
        unordered_map <int,int> mpp;
        while(r<n){
            mpp[nums[r]]++;
            while(mpp.size()>k){
                mpp[nums[l]]--;
                if (mpp[nums[l]]==0){
                    mpp.erase(nums[l]);
                }
                l++;
            }
            number+=r-l+1;
            r++;
        }
        return number;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return helper(nums,k)-helper(nums,k-1);  
    }
};