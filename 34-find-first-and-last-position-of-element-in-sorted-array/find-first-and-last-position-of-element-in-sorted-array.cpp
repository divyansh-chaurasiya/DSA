class Solution {
private:
int first_occ(vector<int>&nums, int low,int high, int target ){
    int f_occ = -1;
    while(low <= high){
            int mid = low+(high-low)/2;
            if(nums[mid] == target){
                f_occ = mid;
                high = mid-1;
            }
            else if(nums[mid] < target){
                low = mid +1;
            }
            else{high = mid-1;}
        }
    return f_occ;
}

int last_occ(vector<int>&nums, int low,int high, int target ){
    int l_occ = -1;
    while(low <= high){
        int mid = low+(high-low)/2;
        if(nums[mid] == target){
           l_occ = mid;
            low = mid+1;
        }
        else if(nums[mid] < target){
            low = mid +1;
        }
        else{high = mid-1;}
    }
    return l_occ ;
}

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int f = first_occ(nums,0,n-1,target);
        int l = last_occ(nums,0, n-1,target);

     return {f,l};
    }
};