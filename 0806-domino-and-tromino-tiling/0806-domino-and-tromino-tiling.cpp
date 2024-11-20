class Solution {
public:

 int numTilings(int N) {
    int md=1e9;
    md+=7;
    vector<long long> v(1001,0);
    v[1]=1;
    v[2]=2;
    v[3]=5;
    if(N<=3)
        return v[N];
    for(int i=4;i<=N;++i){
        v[i]=2*v[i-1]+v[i-3]; 
        v[i]%=md;
    }
    return v[N];
    
}
    // int numTilings(int n) {

    //     vector<long long> dp(1001,0);
    //     int md= 1e9;
    //     md+=7;
    //     dp[1]=1;
    //     dp[2]=2;
    //     dp[3]=5;

    //     if(n<=3){
    //         return dp[n];
    //     }

    //     for(int i=4; i<=n;i++){
    //         dp[i]= dp[i-3]+2*dp[n-1];
    //         dp[i]%=md;
    //     }
    //     return dp[n];
        
    // }
};