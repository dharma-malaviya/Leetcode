// Last updated: 6/27/2026, 7:30:10 PM
class Solution {
public:
    void sortColors(vector<int>& nums) {
      int cut0=0, cut1=0, cut2=0;
    int n=nums.size();

    for (int i = 0; i < n; i++)
    {
        if(nums[i]==0) cut0++;
        if(nums[i]==1) cut1++;
        if(nums[i]==2) cut2++;
    }
    // Overwriting array
    for (int i = 0; i < cut0; i++)
    {
        nums[i]=0;
    }
    for (int i = cut0; i < cut0+cut1; i++)
    {
        nums[i]=1;
    }
    for (int i = cut0+cut1; i < n; i++)
    {
        nums[i]=2;
    }  
    }
};