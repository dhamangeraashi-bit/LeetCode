class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size(); int start=-1;
        int ansStart=-1, ansEnd=-1;
        long long sum=0,maxi= LONG_MIN;
        for(int i=0;i<n;i++)
        {
            if(sum==0)
            start=i;
            sum+=nums[i];
            if(sum>maxi)
            {
                maxi=sum;
                ansEnd=i;
                ansStart=start;
            }
            if(sum<0)
            sum=0;
        }
        return maxi;
    }
};