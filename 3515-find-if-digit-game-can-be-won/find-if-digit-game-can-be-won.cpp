class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sds = 0;
        int dds = 0;
        for(int num:nums){
            if(num<10){
                sds += num;
            }
            else{dds += num;}
        }
    return sds != dds;
    }
};