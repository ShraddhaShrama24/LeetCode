class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int x,i,j,temp;
        for(i=0;i<n;i++)
        {
            for(j=1;j<n;j++)
            {
                if(nums[i]>nums[j])
                {
                    temp=nums[i];
                    nums[i]=nums[j];
                    temp=nums[j];
                }
            }
        }
        return nums[0];
    }
};
