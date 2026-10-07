class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int vv=0;
        int ans=0;
        for(int i=0;i<n;i++) {
            int v=nums[i];
            int vx=0;
            while(v>0) {
                v/=10;
                count++;
            }
            if(count %2==0) {
                ans++;
            }
            count=0;
        }
        return ans;
    }
};