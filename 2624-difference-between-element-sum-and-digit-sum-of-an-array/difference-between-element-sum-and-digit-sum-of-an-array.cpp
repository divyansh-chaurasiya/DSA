class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int es = 0, ds = 0;
        for(int val:nums){
            es += val;
            int temp = val;
            while(temp > 0){
                ds += temp%10;
                temp/=10;
            }
        }
        return abs(es - ds);
    }
};