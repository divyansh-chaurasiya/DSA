class Solution {
private:
    int count(vector<int>& bloomDay, int k, int lim){
        int ans = 0, countf = 0;
        for(int i=0; i<bloomDay.size(); i++){
            if(bloomDay[i] <= lim){
                countf++;
                if(countf == k){
                    ans++;
                    countf = 0;
                }
            }
            else{
                countf = 0;
            }
        }
        return ans;
    }

public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(1LL*bloomDay.size() < 1LL*m*k)return -1;

        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        while(low <= high){
            int mid = (low+high)/2;
            if(count(bloomDay,k,mid) >= m){
                high = mid-1;
            }
            else{low = mid+1;}
        }
        return low;
    }
};