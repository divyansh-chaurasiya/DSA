class Solution {
private:
    int sumd(vector<int>& nums, int div){
        int n = nums.size(), sum = 0;
        for(int i = 0; i < n; i++){
            sum += ceil((double)nums[i]/div);
        }
        return sum;
    }

public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(),nums.end());
        while(low <= high){
            int mid = (low+high)/2;
            if(sumd(nums,mid) <= threshold){
                high = mid-1;
            }
            else{low = mid+1;}
        }
        return low;
    }
};