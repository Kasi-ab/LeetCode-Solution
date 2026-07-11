class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        int area =0;
        int n =height.size();
        int left =0;
        int right =n-1;
        while(left<right){
            area =min(height[left],height[right])*(right-left);
                if(height[left]<height[right]){
                    left++;
                }else if(height[right]<height[left]){
                    right--;
                }
                else {
                    left++;
                }
                if(area>maxArea){
                    maxArea=area;
                }
        } 
        return maxArea;
    }
};
