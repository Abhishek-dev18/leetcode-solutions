class Solution {
public:
    int mySqrt(int x) {
        int k;
        if(x==0){
            return 0;
        }
        if(x==1){
            return 1;
        }
        for(long i=1;i<x/2+1;i++){
            if(i*i==x){
                return i;
                break;
            }else if((i+1)*(i+1)> x){
                return i;
                break;
            }
            else{
                continue;
            }
        }
        return 0;
    }
};