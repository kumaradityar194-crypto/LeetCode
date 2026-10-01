class Solution {
public:
    bool search(vector<int>& v, int target) {
        int st=0;
        int end=v.size()-1;
        while(st<=end) {
            int mid=st+(end-st)/2;
            if(v[mid]==target) {
                return true;
            }
            if(v[st]==v[mid] && v[mid]==v[end]) {
                st++;
                end--;
                continue;
            }
          else  if(v[st]<=v[mid]) {
                if(v[st]<=target && target <v[mid]) {
                    end=mid-1;
                }
                else {
                    st=mid+1;
                }
            }
            else {
                if(v[mid]<target && target <=v[end]) {
                     st=mid+1;
                }
                else {
                    end=mid-1;
                }
            }
        }
       return false; 
    }
};