// class Solution {
// public:
//     int countGoodNumbers(long long n) {
//         string s="";
//         for(long long i=0;i<n;i++) {
//             s+='9';
//         }
//         long long val=stoi(s);
//         long long ans=0;
//         for(int i=0;i<val;i++) {
//             if((i % 2==0 && stoi(s[i]) %2==0) && ( i % 2!=0 && ( i==2 || i==3 || i==5 || i==7 )) {
//                 ans++;
//             }
//         }
//         return ans;
//     }
// };


class Solution {
public:
    long long MOD = 1e9 + 7;
    long long pow(long long a,long long b){
        if(b == 0) return 1LL;
        long long res = 0;
        if(b%2 == 0){
            res = pow(a,b/2);
            res = (res*res)%MOD;
        }
        else{
            res = pow(a,b/2);
            res = (res*res)%MOD;
            res = res*a%MOD; 
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        long long neven = (n+1)/2;
        long long nodd = n - neven;
        long long ans = 1;
        ans = (ans * pow(5,neven)) % MOD;
        ans = (ans * pow(4,nodd)) % MOD;
        return ans;        
    }
};