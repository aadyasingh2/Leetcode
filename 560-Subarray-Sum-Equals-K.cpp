class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int res=0;
        int prefixsum=0;
        unordered_map<int,int> prefix_sum;
        prefix_sum[0]=1;
        for(int num:nums){
            prefixsum+=num;
            if (prefix_sum.find(prefixsum-k)!=prefix_sum.end()){
                res+=prefix_sum[prefixsum-k];
            }
            prefix_sum[prefixsum]++;
        }
        return res;
    }
};