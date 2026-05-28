class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
         vector<int> ans(2,0);
         int n=nums1.size();
         int m=nums2.size();
         unordered_set<int> s;
         for(int i=0;i<m;i++){
            int x= nums2[i];
            s.insert(x);
         }
         for(int j=0;j<n;j++){
            int x=nums1[j];
            if(s.count(x)){
               ans[0]++;
            }
         }
         s.clear();
         for(int i=0;i<n;i++){
            int x= nums1[i];
            s.insert(x);
         }
         for(int j=0;j<m;j++){
            int x=nums2[j];
            if(s.count(x)){
               ans[1]++;
            }
         }
         return ans;
    }
};
