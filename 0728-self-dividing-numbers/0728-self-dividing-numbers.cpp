class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        while(left <=right) {
           int a=left;
            int count1=0;
            int count2=0;
            bool valid=true;
            while(a > 0) {
                int m=0;
                m=a % 10;
                if (m == 0) {
                    valid = false;
                    break;
                }
                if(left % m ==0) {
                     count1++;
                }
                count2++;
                a/=10;
            }
            if(count1==count2 && valid) {
                ans.push_back(left);
            }
            left++;
        }
        return ans;
    }
};