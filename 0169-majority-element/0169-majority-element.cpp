class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {    int ctr=1;
            for(int j=i+1;j<n;j++)
            {
               if(nums[i]==nums[j])
               ctr++;
            }if(ctr>(n/2))
        return nums[i];
        }
        
     return -1;
    }
};