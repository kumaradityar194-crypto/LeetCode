// class Solution {
// public:
//     int numOfWays(vector<int>& nums) {
        
//     }
// };





























































class Solution {
    int MOD = 1e9 + 7;
    vector<vector<long long>> c;

    long long solve(vector<int>& a) {
        int n = a.size();

        if (n <= 2) return 1;

        vector<int> left, right;

        for (int i = 1; i < n; i++) {
            if (a[i] < a[0])
                left.push_back(a[i]);
            else
                right.push_back(a[i]);
        }

        long long ans = c[n - 1][left.size()];

        ans = ans * solve(left) % MOD;
        ans = ans * solve(right) % MOD;

        return ans;
    }

public:
    int numOfWays(vector<int>& nums) {
        int n = nums.size();

        c.assign(n + 1, vector<long long>(n + 1, 0));

        for (int i = 0; i <= n; i++) {
            c[i][0] = c[i][i] = 1;

            for (int j = 1; j < i; j++) {
                c[i][j] = (c[i-1][j-1] + c[i-1][j]) % MOD;
            }
        }

        return (solve(nums) - 1 + MOD) % MOD;
    }
};