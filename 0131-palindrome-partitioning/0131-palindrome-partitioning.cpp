class Solution {
public:
vector<vector<string>>v;
vector<string>a;
bool check ( string & s , int st , int end) {
    while( st <= end) {
        if(s[st]!=s[end]) {
            return false;
        }
        st++;
        end--;
    }
    return true;
}

    void fun(string s, int st) {
        if(st==s.size()) {
            v.push_back(a);
            return;
        }
        for(int i=st;i<s.size();i++) {
            if(check(s , st, i)) {
                a.push_back(s.substr(st, i-st+1));
            
            fun(s , i+1);
            a.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        fun(s, 0);
        return v;
        
    }
};