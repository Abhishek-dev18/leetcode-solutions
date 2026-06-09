class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                int j=i;
                while(j<n-1){
                    int temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                    j++;
                }
                n--;
                i--;
            }
        }
    }
};