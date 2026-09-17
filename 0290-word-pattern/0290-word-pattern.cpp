class Solution {
public:
    bool wordPattern(string p, string s) {
       unordered_map<char,string>mp1;
       unordered_map<string,char>mp2;

       vector<string>v;
       string temp = "";
       for(int i=0;i<=s.length();i++) {

        if(i==s.length() || s[i]==' ') {
            v.push_back(temp);
            temp="";
        }
        else {
            temp+=s[i];
        }
       }

       if(p.length()!=v.size()) {
        return false;
       }
       for(int i=0;i<v.size();i++) {
        char ch=p[i];
        string word=v[i];
        if(mp1.find(ch)!=mp1.end()) {
            if(mp1[ch]!=word) {
                return false;
            }
        }
        if(mp2.find(word)!=mp2.end()) {
            if(mp2[word]!=ch) {
                return false;
            }
        }
        mp1[ch]=word;
        mp2[word]=ch;

       }
       return true;

    }
};