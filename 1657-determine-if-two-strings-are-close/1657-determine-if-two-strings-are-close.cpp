class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length()) {
            return false;
        }
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;

        string s1=word1;
        string s2=word2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        if(s1==s2) {
            return true;
        }
        for(int i=0;i<word1.size();i++) {
             mp1[word1[i]]++;
             mp2[word2[i]]++;
        }
    
       for(auto it: mp1) {
        if(mp2.find(it.first)==mp2.end()) {
            return false;
        }
       }
       vector<int>v1;
       vector<int>v2;
       for(auto x:mp1) {
               v1.push_back(x.second);
       } 
       for(auto x:mp2) {
               v2.push_back(x.second);
       } 
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

       return v1==v2;
        
    }
};