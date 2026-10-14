class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
      unordered_map<int,int>mp;
      for(auto a: nums1) {
        for(auto b:nums2) {
            mp[a+b]++;
        }
      }
      int count=0;
      for(auto a:nums3) {
        for(auto b:nums4) {
            count+=mp[-(a+b)];
        }
      }
      return count;
    }
};