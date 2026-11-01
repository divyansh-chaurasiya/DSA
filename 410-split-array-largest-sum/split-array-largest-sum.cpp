class Solution {
private:
    int suma(vector<int>& nums, int lim){
        int sub = 1, sum = 0;
        for(int i = 0; i<nums.size(); i++){
            if(sum + nums[i] > lim){
                sum = nums[i];
                sub++;
                
            }
            else{
                sum += nums[i];
            }
        }
        return sub;
    }

public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(),0);
        int ans = 0;
        while(low <= high){
            int mid = (low+high)/2;
            if(suma(nums,mid) <= k){
                ans = mid;
                high = mid-1;
            }  
            else{low = mid+1;}

        } 
        return ans;
    }
};