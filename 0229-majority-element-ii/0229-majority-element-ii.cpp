class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int mm=n/3+1;
        map<int,int>mpp;
        vector<int> ls;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it:mpp)
        {
            if(it.second>=mm)
            ls.push_back(it.first);
        }
        
        return ls;
    }
};