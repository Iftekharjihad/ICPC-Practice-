#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        ll n,m;
    cin >> n >> m;
    ll grid[n][m];
    vector<ll> v;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
            v.push_back(grid[i][j]);
        }
    }
    sort(v.begin(),v.end());
    ll mn = v[0];
    sort(v.rbegin(),v.rend());
    ll mx = v[1];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == mn){
                grid[i][j] = mx;
            }
        }
    }
    ll sum = 0;
    for(int i = 0; i < n; i++){
        int xr = grid[i][0];
        for(int j = 1; j < m; j++){
            xr ^= grid[i][j];
        }
        sum += xr;
    }
    for(int i = 0; i < n; i++){
        int xr = grid[i][0];
        for(int j = 1; j < m; j++){
            xr ^= grid[j][i];
        }
        sum += xr;
    }
    cout << sum << endl;
    }
    
      
    return 0;
}
