class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int max=candies[0];
        for(int i=1;i<n;i++){
            if(candies[i]>max){
                max=candies[i];
            }
        }
        vector<bool> can(n);
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies >= max){
                can[i]=true;
            }
            else{
                can[i]=false;
            }
        }
        return can;
    }
};