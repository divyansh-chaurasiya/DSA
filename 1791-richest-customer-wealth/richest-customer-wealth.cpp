class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int m = accounts[0].size();

        int maxi = 0;
        for(int i = 0; i<n; i++){
            int count = 0;
            for(int j = 0; j<m; j++){
                count += accounts[i][j];
            }
            maxi = max(maxi,count);
        }
        return maxi;        
    }
};