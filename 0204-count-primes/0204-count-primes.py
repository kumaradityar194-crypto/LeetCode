class Solution:
    def countPrimes(self, n: int) -> int:
        if(n < 2):
            return 0
        v=[True]*n
        v[0]=False
        v[1]=False
        for i in range(2,n):
            if i*i >= n:
                break
            if v[i]==True:
                for j in range(i*i,n,i):
                    v[j]=False
        count=0
        for i in range(n):
            if v[i]==True:
                count+=1
        return count

        