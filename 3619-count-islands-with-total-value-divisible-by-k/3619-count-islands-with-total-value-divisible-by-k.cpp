class Solution {
public:
    int n, m;
    long long count;
    void dfs(vector<vector<int>>& grid,int i,int j) {
        if( i<0 || j<0 || i>=n || j>=m){
            return;
    }
    if(grid[i][j]==0) {
        return ;
    }
          count+=grid[i][j];
          grid[i][j]=0;
          dfs(grid,i+1,j);
          dfs(grid,i-1,j);
          dfs(grid,i,j+1);
          dfs(grid,i,j-1);

    }

    int countIslands(vector<vector<int>>& grid, int k) {
        n=grid.size();
        m=grid[0].size();
        
        int ans=0;
            for(int i=0;i<n;i++) {
                        

                for(int j=0;j<m;j++){

                    if(grid[i][j]!=0) {
                        count=0;
                        dfs(grid, i,j);
                    
                    if(count % k==0) {
                        ans++;
                    }
                    }
            }
            }
            return ans;

    }
};