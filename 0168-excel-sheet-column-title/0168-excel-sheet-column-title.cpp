class Solution {
public:
    string convertToTitle(int col) {
        map<int, string>mp;
        for(int i=1;i<=25;i++) {
            mp[i]=string(1,('A'+i-1));
        }
       // mp[0]='Z';
        mp[26]="Z";
        string s="";
            while( col > 0)  {
                int rem=( col-1 ) % 26;
                s+=(mp[rem+1]);
                col=(col-1)/26;
            }
            

        reverse(s.begin(), s.end());
        return s;
    }
};