class Solution {
private:
    int possible(vector<int>& bd,int lim, int k){
        int count = 0,app = 0, n = bd.size(); 
        for(int i = 0; i<n; i++){
            if(bd[i] <= lim){
                count++;
                if(count == k){
                    app++;
                    count = 0;
                }
            }
            else{count = 0;}
        }
        return app;
    }

public:
    int minDays(vector<int>& bloomDay, int m, int k) {
    int low = *min_element(bloomDay.begin(), bloomDay.end());
    int high = *max_element(bloomDay.begin(), bloomDay.end());
    int ans = -1;
    if(1LL * bloomDay.size() < 1LL * m*k)return -1;
    while(low <= high){

        int mid = low+(high-low)/2;
        int t_app = possible(bloomDay,mid,k);
        if(t_app >= m){
            high = mid-1, ans = mid; 
        }
        else if(t_app < m){
            low = mid+1;
        }
        else{high = mid-1;}
    }
    return ans;
    }
};