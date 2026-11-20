class Solution {
private:
    int countd(vector<int>& weights, int lim){
        int count = 1;
        long long sum = 0;
        for(int i=0; i<weights.size(); i++){
            if(sum + weights[i] > lim){
                count++;
                sum = weights[i];
            }
            else{sum += weights[i];}
        }
        return count;
    }

public:
    int shipWithinDays(vector<int>& weights, int days) {
       int low = *max_element(weights.begin(),weights.end()); 
       int high = accumulate(weights.begin(),weights.end(),0);
       while(low <= high){
        int mid = (low+high)/2;
        if(countd(weights,mid) <= days){
            high = mid-1;
        }
        else{low = mid+1;}
       }
       return low;
    }
};