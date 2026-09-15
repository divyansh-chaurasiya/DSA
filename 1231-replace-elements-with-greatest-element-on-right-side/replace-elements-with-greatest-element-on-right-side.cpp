class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i=0; i<arr.size(); i++){
            int maxn = 0;
            if(i == arr.size()-1){arr[i] = -1;break;}
            for(int j=i+1; j<arr.size(); j++){
                maxn = max(maxn, arr[j]);
            }
            arr[i] = maxn;
        }
    return arr;
    }
};