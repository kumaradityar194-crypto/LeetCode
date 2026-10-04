class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.begin());
        sort(t.begin(),t.begin());
        char ans = 0;
        int n=s.length();
        int m=t.length();
        int an=max(n,m);
        for(auto c:s) {
            ans ^= c;
        }
        for(char c:t) {
            ans ^= c;
        }


        return ans;
    }
};