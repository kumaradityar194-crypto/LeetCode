class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;
        vector<int>v;
        for(int i=0;i<arr1.size();i++) {
            for(int j=0;j<arr2.size();j++) {
                    if(abs(arr1[i]-arr2[j])<=d) {
                        v.push_back(i);
                        break;
                    }
            }
        }
    int n=v.size();


return arr1.size()-n;
    }
};