class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int count=0;
        set<int>st;
        for(int i=0;i<nums.size();i++) {
            for(int j=i+1;j<nums.size();j++) {
                for(int k=j+1;k<nums.size();k++) {
                    if(nums[i]==nums[j] && nums[j]==nums[k]  && j-i==k-j) {
                        count=0;
                        for(int l=0;l<nums.size();l++) {
                            if(nums[l]==nums[i]) {
                                count++;
                            }
                        }
                        if(count==3) {
                        st.insert(nums[i]);
                        }
                    }
                }
            }
        }
        return st.size();
    }
};