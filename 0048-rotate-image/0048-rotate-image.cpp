class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int left=0;
        int top=0;
        int n=m.size();
        int bot=n-1;
        int mm=m[0].size();
        int rig=mm-1;
        vector<vector<int>>a=m;
        while(top <= bot && left <=rig) {
            for(int i=rig;i>=0;i--) {
                 a[top][i]=m[i][left];
            }
            top++;
            left++;
        }
      //  m=a;
        for(auto & row:a) {
            reverse(row.begin(), row.end());
        }
        m=a;
      //  sort(m.begin(),m.end());
    }
};