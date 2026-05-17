class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size(),max=0,tot=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                tot=tot+1;
                if(tot>max){
                    max=tot;
                }
            }else{
                tot=0;
            }
        }
        return max;
    }
};