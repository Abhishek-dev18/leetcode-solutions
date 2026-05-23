class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
        int k=0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]){
                    k++;
                }
            }
            if(k==1){
                return nums[i];
            }
        }
        return {}; 
    }
};