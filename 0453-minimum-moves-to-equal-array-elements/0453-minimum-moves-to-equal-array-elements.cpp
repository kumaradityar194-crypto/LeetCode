class Solution {
public:
    int minMoves(vector<int>& nums) {
       // int maxx=*max_element(nums.begin(), nums.end());
        int minn=*min_element(nums.begin(),nums.end());
       int n=nums.size();
       int res=0;
        for(auto x:nums){
         res+=(x-minn);
        } 
        return res;
    }
};