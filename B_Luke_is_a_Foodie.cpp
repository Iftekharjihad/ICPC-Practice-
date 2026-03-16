#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll n,x;
        cin >> n >> x;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        ll L = a[0] - x;
        ll R = a[0] + x;
        int ans = 0;
        for(int i = 1; i < n; i++){
            ll nl = a[i] - x;
            ll nr = a[i] + x;
            L = max(L,nl);
            R = min(R,nr);
            if(L > R){
                ans++;
                L = nl;
                R = nr;
            }
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
