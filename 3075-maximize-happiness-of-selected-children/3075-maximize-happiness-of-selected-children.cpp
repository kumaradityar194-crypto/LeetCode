class Solution {
public:
    long long maximumHappinessSum(vector<int>& v, int k) {
        long long sum=0;
        int dx=0;
     sort(v.rbegin(), v.rend());

        while(k>0) {
             int maxx=v[dx];

            
                if(dx==0) {
                    sum=maxx;
                }
              else  if(maxx-dx >=0) {
                    sum+=maxx-dx;
                }
                else {
                    sum+=0;
                }
                dx++;
            
            k--;
        }
        return sum;
    }
};