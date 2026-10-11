class Solution {
private:
int CP(vector<int>&nums, int low, int mid, int high){
    int count = 0;
    int j = mid+1;
    for(int i = low; i<= mid; i++){
        while(j <= high && (long long)nums[i] > 2*(long long)nums[j]){j++;}
        count += (j-(mid+1));
    }
    return count;
}

void merge(vector<int>&nums, int low, int mid, int high){
    int i = low, j = mid+1,  k = 0;
    vector<int> temp(high-low+1);
    while(i <= mid && j <= high){
        if(nums[i] <= nums[j])temp[k++] = nums[i++];
        else{temp[k++] = nums[j++];}
    }
    while(i <= mid){temp[k++] = nums[i++];}
    while(j <= high){temp[k++] = nums[j++];}
 
    for(int i = low, k = 0; i<= high; i++, k++){
        nums[i] = temp[k];
    }
    
}

int MSC(vector<int>&nums, int low, int high){
    int count = 0;
    if(low<high){
        int mid = low +(high-low)/2;
        count += MSC(nums,low,mid);
        count += MSC(nums,mid+1,high);
        count += CP(nums,low,mid,high);
        merge(nums,low,mid,high);

    }    
return count;
}


public:
    int reversePairs(vector<int>& nums) {
     return MSC(nums, 0, nums.size()-1);   
    }
};