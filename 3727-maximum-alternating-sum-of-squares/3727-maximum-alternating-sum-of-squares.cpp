class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int>v;
        for(auto x: nums) {
            v.push_back(abs(x));
        }
        sort(v.begin(),v.end());
        int n=v.size();
        long long sum=0;
        for(int i=n/2;i<n;i++) {
            sum+=v[i]*v[i];
        }
        for(int i =0;i<n/2;i++ ) {
            sum-=v[i]*v[i];
        }
        return sum;
    }
};