class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>arr;
        int start=0,end=start+1;
        for(start=0;start<nums.size();start++)
        for(end=start+1;end<nums.size();end++){
            if(nums[start]+nums[end]==target){
                arr.push_back(start);
                arr.push_back(end);
            }
          
        }
        return arr;

        
       
    
    }
};
