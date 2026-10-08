class Solution {
public:
    int trailingZeroes(int n) {
        int ans = 0;
        int x = 5;
        while(n >= x){
            ans = ans + n/x;
            x = x*5;
        }
        return ans;
    }
};