class Solution {
public:
long long totalHours(vector<int>& piles, int k) {
    long long hours = 0;
    for(int i = 0; i < piles.size(); i++) {
        hours += ((long long)piles[i] + k - 1) / k;
    }
    return hours;
}
    int minEatingSpeed(vector<int>& piles, int h) {
            int k=0;
            int n=piles.size();
            int low=1;
            int high = *max_element(piles.begin(), piles.end());
            while(low<=high){
            int mid =(low+high)/2;
                if(totalHours(piles, mid) <= h){
                    high=mid-1;
                    k=mid;
                }else{
                    low=mid+1;
                }  
            }
            return k;
    }

};
