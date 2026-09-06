class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ctr1=0, ctr2=0;
        int el1=0, el2=0;

        for(int i=0;i<n;i++)
        {
            if(ctr1==0 && el2!=nums[i])
            {
                ctr1=1;
                el1=nums[i];
            }
            else if (ctr2== 0 && el1!=nums[i]) 
            {
                ctr2=1;
                el2=nums[i];
            }
            else if (nums[i]==el1)
            ctr1++;
            else if(nums[i]==el2)
            ctr2++;
            else
            { ctr1--; ctr2--;}
        }
        ctr1=0,ctr2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]== el1) ctr1++;
            else if(nums[i]==el2) ctr2++;
        }
        vector<int> ans;
        if(ctr1>n/3) ans.push_back(el1);
        if(ctr2>n/3) ans.push_back(el2);
        return ans;
    }
};