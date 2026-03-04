#include<bits/stdc++.h>
using namespace std;
#define ll long long
int val[15][15];
int dp[15][15];
int n,m;

ll mx_sum(int i,int j){
    if(i == n-1 && j == m-1){
        return val[i][j];
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    ll op1 = -1e18,op2 = -1e18;
    if(i+1 < n){
        op1 = mx_sum(i+1,j) + val[i][j];
    }
    if(j+1 < m){
        op2 = mx_sum(i,j+1) + val[i][j];
    }
    dp[i][j] = max(op1,op2);
    return dp[i][j];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            dp[i][j] = -1;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> val[i][j];
        }
    }
    cout << mx_sum(0,0) << endl;
      
    return 0;
}
