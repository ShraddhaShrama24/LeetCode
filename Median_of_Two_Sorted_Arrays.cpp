class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums3;
        int i=0,j=0;
        int m=nums1.size();
        int n=nums2.size();
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j]) nums3.push_back(nums1[i++]);
            else nums3.push_back(nums2[j++]);
        }
        while(i<m) nums3.push_back(nums1[i++]);
        while(j<n) nums3.push_back(nums2[j++]);
        int n1=m+n;
        if(n1%2==1)
           return nums3[n1/2];
        return (double)((double)(nums3[n1/2])+(double)(nums3[n1/2 - 1]))/2.0;
    }
};
