class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans; 
        int n=numRows;
        
        for(int r=0; r<n ;r++)
        {   vector<int> row;
            int final =1;
            for(int i=0;i<=r;i++)
            {
                row.push_back(final);
                final=final*(r-i);
                final=final/(i+1);
            }
            ans.push_back(row);
        }
        return ans;
    }
};