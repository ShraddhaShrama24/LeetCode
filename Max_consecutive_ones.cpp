class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0, maxl=0,zero=0;
        int n=nums.size();
        for(int right=0;right<n;right++){
            if(nums[right]==0){
                zero++;
            }
            while(zero>k){
                if(nums[left]==0){
                    zero--;
                }
                left++;
            }
            maxl=max(maxl, right-left+1);
        }
        return maxl;
    }
};
