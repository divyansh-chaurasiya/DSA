class Solution {
private:
    int comp(vector<int>& ws, int lim){
        int sum = 0,days = 1, n = ws.size();
        for(int i = 0; i<n; i++){
            if(sum + ws[i] > lim){
                days++;
                sum = ws[i];
            }
            else{
                sum += ws[i];
            }
        }
        return days;
    }

public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);

        while(low <= high){
            int mid = (low + high)/2;

            if(comp(weights,mid) <= days){
                high = mid-1;
            }
            else{
                low = mid +1;
            }
        }
        return low;
    }
};