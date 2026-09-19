class Solution {
public:
 bool check( vector<int>& mps, vector<int>&mpt) {
    for(int i=0;i<226;i++) {
        if(mps[i] < mpt[i]) {
            return false;
        }
    }
    return true;
 }

    string minWindow(string s, string t) {
        vector<int>mps(226,0);
        vector<int>mpt(226,0);
        int left=0;
        int start=0;
        int minLen=INT_MAX;
        for(int i=0;i<t.size();i++) {
            mpt[t[i]]++;
        }
        for(int right=0;right<s.length();right++) {
            mps[s[right]]++;
            while(check(mps,mpt)) {
                if(right-left+1 < minLen) {
                    minLen=right-left+1;
                    start=left;
                }
                mps[s[left]]--;
                left++;
            }
        }
     if(minLen==INT_MAX) {
        return "";
     }
     return s.substr(start,minLen);
        
    }
};

