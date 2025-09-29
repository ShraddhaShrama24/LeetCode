class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        long long int sum1=0;
        long long int sum = (n*(n+1))/2;
        for(long long int i=0;i<n;i++)
        {
            sum1=nums[i]+sum1;
        }
        long long int ms=sum-sum1;
        return ms;
    }
};
