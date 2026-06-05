#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll x,y,n;
        cin >> x >> y >> n;
        ll res = n/x;
        ll ans = x*res + y;
        if(ans > n){
            cout << ans - x << endl;
        }
        else{
            cout << ans << endl;
        }
    }
    
      
    return 0;
}
