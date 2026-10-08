class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1 = 0, el2 = 0;
        int cnt1 = 0, cnt2 =0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == el1)cnt1++;
            else if(nums[i] == el2)cnt2++;
            else if(cnt1 == 0){
                el1 = nums[i];
                cnt1 = 1;
            }
            else if( cnt2 == 0){
                el2 = nums[i];
                cnt2 = 1;
            }
            else{
                cnt1--,cnt2--;
            }
        }

    vector<int>ans;
    int ver1 = 0, ver2 = 0;
    for(int val:nums){
        if(val == el1)ver1++;
        else if(val == el2)ver2++;
    }

    int mini = nums.size()/3;
    if(ver1 > mini)ans.push_back(el1);
    if(el2 != el1 && ver2 >mini){ans.push_back(el2);}
    return ans;
    }
};