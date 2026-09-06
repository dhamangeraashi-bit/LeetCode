class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<vector<int>> ans;
        ans.push_back(nums);

        int n = nums.size();

        for(int row = 1; row < n; row++)
        {
            vector<int> temppls;

            for(int col = 0; col < n - row; col++)
            {
                temppls.push_back((ans[row-1][col] + ans[row-1][col+1]) % 10);
            }

            ans.push_back(temppls);
        }

        return ans[n-1][0];
    }
};