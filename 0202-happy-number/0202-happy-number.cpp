class Solution {
public:
    int check(int x) {
        int ans=0;
        while(x>0) {
            ans += (x % 10)*(x % 10);
            x/=10;
        }
        return ans;
    }

    bool isHappy(int n) {
        unordered_set<int>st;
        int x=n;
        
        int ans=check(x);
        while( n!=1 && st.find(n)==st.end()) {
            st.insert(n);
            n=check(n);
        }

        return n==1;

        
    }
};