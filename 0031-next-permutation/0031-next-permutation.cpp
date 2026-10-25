// class Solution {
// public:
//     vector<vector<int>>v;
//     void solve(vector<int>& nums , int idx) {
//         if(idx==nums.size()) {
//             v.push_back(nums);
//             return;
//         }
//         for(int i=idx;i<nums.size();i++){
//             swap(nums[idx],nums[i]);
//             solve(nums,idx+1);
//             swap(nums[idx],nums[i]);
//     }
//     }
//     void nextPermutation(vector<int>& nums) {
//         solve(nums, 0);
//         int n=v.size();
//         sort(v.begin(), v.end());
        
//         int pos=0;
//         for(int i=0;i<n;i++) {
//             if(v[i]==nums) {
//                  pos=i;
//             }
//         }
//         pos=(pos+1) %n;
//         nums=v[pos];
        
//     }
// };

















class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;

        // Step 1: Find first decreasing element from right
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        // Step 2: Find the next greater element
        if (i >= 0) {
            int j = n - 1;

            while (nums[j] <= nums[i]) {
                j--;
            }

            swap(nums[i], nums[j]);
        }

        // Step 3: Reverse the remaining suffix
        reverse(nums.begin() + i + 1, nums.end());
    }
};
