class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int pf_sum = 0, count = 0;
        mp[0] = 1;
        for(int val : nums){
            pf_sum += val;
            int need_sum = pf_sum - k;
            if(mp.find(need_sum) != mp.end()){
                count += mp[need_sum];
            }
            mp[pf_sum]++;
        }
    return count;
    }
};