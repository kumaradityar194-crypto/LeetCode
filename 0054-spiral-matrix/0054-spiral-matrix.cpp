class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mm) {
        vector<int>v;
        int n=mm.size();
        int m=mm[0].size();
        int top=0;
        int left=0;
        int bot=n-1;
        int rig=m-1;
        while( top <=bot && left <=rig) {
            //1. left -> right
            for(int i=left; i<=rig;i++) {
                v.push_back(mm[top][i]);
            }
            top++;
            // 2.top -> bottom
            for(int i=top;i<=bot;i++) {
                v.push_back(mm[i][rig]);
            }
            rig--;
            // 3.right -> left
            if( top <=bot) {
                for(int j=rig;j>=left;j--) {
                    v.push_back(mm[bot][j]);
                }
                bot--;
            } 
            //4. bottom -> top
            if(left <=rig) {
                for(int j=bot;j>=top;j--) {
                    v.push_back(mm[j][left]);
                }
                left++;
            }
        }


        return v;
    }
};