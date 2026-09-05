class Solution {
public:
    vector<int> getRow(int rowIndex) {
     
        vector<int> ans;

        int n = rowIndex;
        long long final=1;
        
        for(int i=0; i <= n; i++) {
                ans.push_back(final);
                final = final * (n - i);
                final = final / (i+1 );
                
            }
         return ans;
    }
};