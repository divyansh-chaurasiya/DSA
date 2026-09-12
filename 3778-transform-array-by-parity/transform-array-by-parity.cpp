class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        for(int val=0; val<nums.size(); val++){
            if(nums[val]%2==0){nums[val] = 0;}
            else{nums[val]=1;}
        }
    sort(nums.begin(),nums.end());
    return nums;
    }
};