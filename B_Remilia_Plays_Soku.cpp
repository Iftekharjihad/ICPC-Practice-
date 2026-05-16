#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll n,x1,x2,k;
        cin >> n >> x1 >> x2 >> k;
        ll diff = abs(x1 - x2);
        ll x = min(diff, n-diff);

        ll ans = min(x+k, n-1);

        cout << ans << endl;
    }
    
      
    return 0;
}
