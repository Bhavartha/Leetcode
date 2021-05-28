class Solution {
public:
    int no_of_primes(int n){
        vector<bool> v(n+1,true);
        int pc=0;
        for(int i=2;i<=n;i++){
            if(v[i]) pc++;
            for(int j=i*i;j<=n;j+=i)
                v[j]=false;
        }
        return pc;
    }
    
    int fact(int n){
        long s=1;
        int m=1e9+7;
        for(int i=2;i<=n;i++)
            s = (s*i)%m;
        return s;
    }
    
    int numPrimeArrangements(int n) {
        int m=1e9+7;
        int x = no_of_primes(n);
        return (fact(x)*1LL*fact(n-x))%m;
    }
};
