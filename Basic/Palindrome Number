class Solution {
public:
    bool isPalindrome(int x) {
    long temp = x,n,r=0;
    while (temp>0){
        n=temp%10;
        r=n+r*10;
        temp=temp/10;
    }
    if(r==x){
        return true;
    }
    return false;
    }
};