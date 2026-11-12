class Solution {
private:
    int countp(vector<int>& nums, int lim){
        int prt = 1;
        long long count = 0;
        for(int i = 0; i<nums.size(); i++){
            if(count + nums[i] > lim){
                prt++;
                count = nums[i];
            }
            else{count += nums[i];}
        }
        return prt;
    }

public:
    int splitArray(vector<int>& nums, int k) {
        int ans = 0;
        int low = *max_element(nums.begin(),nums.end());
        long long high = accumulate(nums.begin(),nums.end(),0);
        while(low <= high){
            int mid = (low + high)/2;
            if(countp(nums,mid) <= k){
                ans = mid;
                high = mid-1;
            }
            else{low = mid+1;}
        }
        return ans;
    }
};