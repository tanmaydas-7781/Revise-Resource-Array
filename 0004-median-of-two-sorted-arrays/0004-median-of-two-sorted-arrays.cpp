class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int m=nums1.size();
        int n=nums2.size();
        int i=m-1;
        int j=n-1;
        while(i>=0 && j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                ans.push_back(nums1[i]);
                i--;
            }
            else 
            {
                ans.push_back(nums2[j]);
                j--;
            }
        }
        while(i>=0)
        {
            ans.push_back(nums1[i]);
            i--;
        }
        while(j>=0) 
        {
            ans.push_back(nums2[j]);
            j--;
        }
       double median;
       int p=ans.size();
       if(p%2==0)
       {
        median=(ans[(p/2)-1]+ans[p/2])/2.0;
       }
       else 
       {
        median=ans[p/2];
       } 
       return median;
    }
};