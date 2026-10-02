class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int ans = 0;
        int last = nums.size();
        if( last == 0)return 0;
        sort(nums.begin(),nums.end());
        int back = (nums[last-1]*nums[last-2]*nums[last-3]);
        int front = (nums[0]*nums[1]*nums[last-1]);
        ans = max(back,front);
        return ans;
    }
};