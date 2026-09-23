class Solution {
public:
    vector<int> getRow(int rowIndex) {
     vector<int>ans;
     int row = rowIndex+1;
     long long sum = 1;
     ans.push_back(sum);
     for(int i = 1; i<row; i++){
        sum = sum * (row-i);
        sum = sum/i;
        ans.push_back(sum);
     }    
    return ans;
    }
};