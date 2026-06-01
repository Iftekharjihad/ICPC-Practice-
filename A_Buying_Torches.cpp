#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll x,y,k;
        cin >> x >> y >> k;
        ll need = k * (y+1) - 1;
        ll ans = (need + (x-2)) / (x-1);
        cout << ans + k << endl;
    }
    
      
    return 0;
}
