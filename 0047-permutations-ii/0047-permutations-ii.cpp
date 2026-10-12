class Solution {
public:
vector<vector<int>>v;
void solve(vector<int>&nums,int i) {
    if(i==nums.size()) {
        v.push_back(nums);
        return;
    }

    for(int j=i;j<nums.size();j++) {
        
        
        swap(nums[i],nums[j]);
        solve(nums,i+1);
        swap(nums[i],nums[j]);
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        solve(nums,0);
        set<vector<int>>st;
        for(auto it:v) {
            st.insert(it);
        }
        vector<vector<int>>res;
        for(auto it:st) {
            res.push_back(it);
        }
        return res;
    }
};