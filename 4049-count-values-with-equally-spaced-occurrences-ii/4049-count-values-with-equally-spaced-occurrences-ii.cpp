class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int>mp;
        unordered_map<int,vector<int>>m;
        for(int i=0;i<nums.size();i++) {
            mp[nums[i]]++;
            m[nums[i]].push_back(i);
            
        }
        stack<int>s;
        for(auto it:mp) {
            if(it.second >=3) {
                s.push(it.first);
            }
        }
        int count=0;
         vector<vector<int>>a;
        while(!s.empty()) {
        int ans=s.top();
        s.pop();
         vector<int>v=m[ans];  
     a.push_back(v);
            int diff=v[1]-v[0];
            bool ok=true;
            for(int i=2;i<v.size();i++) {
                if(v[i]-v[i-1]!=diff) {
                    ok=false;
                    break;
                }
            }
            if(ok) {
                count++;
            }
        }
        return count;
        
    }
};