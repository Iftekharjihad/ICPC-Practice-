#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,m,q;
    cin >> n >> m >> q;
    ll adj_mat[n+5][n+5];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            adj_mat[i][j] = LLONG_MAX;
        }
    }
    for(int i = 1; i <= n; i++){
        adj_mat[i][i] = 0;
    }
    while(m--){
        ll a,b,c;
        cin >> a >> b >> c;
        adj_mat[a][b] = min(adj_mat[a][b],c);
        adj_mat[b][a] = min(adj_mat[a][b],c);
    }
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(adj_mat[i][k] != LLONG_MAX && adj_mat[k][j] != LLONG_MAX && adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j]){
                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
                }
            }
        }
    }
    while(q--){
        int x,y;
        cin >> x >> y;
        if(adj_mat[x][y] == LLONG_MAX){
            cout << -1 << endl;
        }
        else{
            cout << adj_mat[x][y] << endl;
        }
    }
      
    return 0;
}
