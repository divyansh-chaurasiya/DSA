class Solution {
private:
    long long minam(vector<int>& piles, int lim){
        long long sum = 0;
        for (int pile : piles) {
            sum += pile / lim + (pile % lim != 0);
        }

        return sum;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());
        while(low <= high){
            int mid = low + (high-low)/2;
            if(minam(piles,mid) <= h){
                high = mid-1;
            }
            else{low = mid+1;}
        }
        return low;
    }
};