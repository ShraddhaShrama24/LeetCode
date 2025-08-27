class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0;
        int zeros = 0;
        int ans = 0;
        int n = nums.size();
        for (int right = 0; right < n; right++) {
            if (nums[right] == 0) 
                zeros++;
            while (zeros > 1) {
                if (nums[left] == 0) 
                    zeros--;
                left++;
            }
            ans = max(ans, right - left);
        }
        return ans;
    }
};
