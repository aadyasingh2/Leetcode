class Solution {
public:
    int less(vector<int>& nums, int k) {
        int cnt = 0;
        int l = 0, r = 0;
        int n = nums.size();
        int odd = 0;
        while (r < n) {
            if (nums[r] % 2 != 0) {
                odd++;
            }
            while (odd > k) {
                if (nums[l] % 2 != 0) {
                    odd--;
                }
                l++;
            }
            cnt += r - l + 1;
            r++;
        }
        return cnt;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return less(nums, k) - less(nums, k - 1);
    }
};