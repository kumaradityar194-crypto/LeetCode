class Solution {
public:
    bool isUgly(int n) {
        if(n < 2 && n > 0) {
            return true;
        }
        if (n <= 0) {
            return false;
        }
        int x=n;
        while(x % 2==0) {
            x/=2;
        }
        while(x%3==0) {
                x/=3;
            }

            while(x%5==0) {
                x/=5;
            }
        if(x==1) {
            return true;
        }
        return false;
    }
};