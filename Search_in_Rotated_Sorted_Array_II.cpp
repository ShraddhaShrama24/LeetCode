class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int i,c=0,x=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]==target){
                x=i;
                c++;
            }
        }
        if(c==0){
            return false;
        }
        else
        {
            return true;
        }
    }
};
