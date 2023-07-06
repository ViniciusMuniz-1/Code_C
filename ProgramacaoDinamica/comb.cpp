#include <iostream>

using namespace std;

int dp[101][101];

comb2(int n, int k){
    if(dp[n][k] != -1){
        return dp[n][k];
    }
    if (k == 1){
        dp[n][k]=n;
    }
    else if(n == k){
        dp[n][k]=1;
    }
    else{
        return comb2(n-1,k-1)+comb2(n-1,k);
    }

    return dp[n][k];
}

comb(int n, int k){
    if (k == 1){
        return n;
    }
    if(n == k){
        return 1;
    }

    return comb(n-1,k-1)+comb(n-1,k);
}

int main(){
    int n, k;
    cin >> n >> k;
    cout << comb2(n,k);
    return 0;
}