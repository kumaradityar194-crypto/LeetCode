class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        int left=0;
        int max_c=0;
        int res=0;
        for(int i=0;i<s.length();i++) {
            freq[s[i]-'A']++;
            if(freq[s[i]-'A'] > max_c) {
                max_c=freq[s[i]-'A'];
            }     
            while(i-left+1 - max_c > k) {
                freq[s[left]-'A']--;
                left++;
            }
         res = max(res, i - left + 1);
   
        }
        return res;
    }
};