class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ls,eq,gt;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < pivot){
                ls.push_back(nums[i]);
            }
            else if(nums[i] == pivot){
                eq.push_back(nums[i]);
            }
            else{
                gt.push_back(nums[i]);
            }
        }
        vector<int>ans;
        for(int val:ls){
            ans.push_back(val);
        }
        for(int val:eq){
            ans.push_back(val);
        }
        for(int val:gt){
            ans.push_back(val);
        }
        return ans;
    }
};