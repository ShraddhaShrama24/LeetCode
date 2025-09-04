class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size(),temp;
       for(int i=0;i<n;i++)
       {
        if(nums[i-1]<nums[i]>nums[i+1]){
            nums[i]=temp;
        }
       }
       return temp;
    }
};
