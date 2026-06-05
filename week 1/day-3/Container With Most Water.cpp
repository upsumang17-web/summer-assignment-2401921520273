class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0,ans=0;
        int high=height.size()-1;
        while(low<high){
            int area=min(height[low],height[high])*(high -low);
            ans=max(ans,area);
            if(height[low]<height[high]) low++;
            else high--;
        }return ans;
    }
};
