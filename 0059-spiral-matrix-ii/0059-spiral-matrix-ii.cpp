class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
         vector<int>v;
         vector<vector<int>> ans(n, vector<int>(n, 0));
        int val=1;
        int top = 0;
        int left = 0;
        int bot = n - 1;
        int rig = n - 1;
        while( top <=bot && left <=rig) {
            //1. left -> right
            for(int i=left; i<=rig;i++) {
                 ans[top][i] = val++;
            }
            
            top++;
            // 2.top -> bottom
            for(int i=top;i<=bot;i++) {
                 ans[i][rig] = val++;
            }
                    

            rig--;
            // 3.right -> left
            if( top <=bot) {
                for(int j=rig;j>=left;j--) {
                    ans[bot][j] = val++;
                }
                            

                bot--;
            } 
            //4. bottom -> top
            if(left <=rig) {
                for(int j=bot;j>=top;j--) {
                    ans[j][left] = val++;

                }

                left++;
            }
        }


        return ans;
    }
};