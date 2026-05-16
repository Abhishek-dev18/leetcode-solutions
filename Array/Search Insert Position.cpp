class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target<nums[0]){
            return 0;
        }else if(target>nums[nums.size()-1]){
            return nums.size();
        }else{
            for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
            else if(nums[i]==(target-1)){
                return i+1;
            }
            else if(nums[i]==(target+1)){
                return i;
            }else{
                continue;
            }
        }
        }
        return {};
    }
};