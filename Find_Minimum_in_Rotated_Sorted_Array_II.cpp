class Solution {
public:
    int findMin(vector<int>& nums) {
        int i,j,temp;
        int n=nums.size();
        for(i=0;i<n;i++)
        {
            for(j=1;j<n;j++)
            {
                if(nums[i]>nums[j])
                {
                    temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }
        }
        return nums[0];
    }
};
