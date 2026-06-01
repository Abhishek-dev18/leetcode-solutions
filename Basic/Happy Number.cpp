class Solution {
public:
    bool isHappy(int n) {
        int temp=n;
        while(temp!=1 && temp != 4){
            int num = temp;
            int sq = 0;
            while (num > 0) {
                int a = num % 10;   // get last digit
                sq = a * a + sq;  // add square of digit
                num = num / 10;       // remove last digit
            }
            temp=sq;
        }
        if(temp==1){
            return true;
        }
        return false; 
    }
};