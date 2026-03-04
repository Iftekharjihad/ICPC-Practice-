#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    ll t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        unordered_set<ll> s;
        for(ll i = 0; i < n; i++){
            ll x;
            cin >> x;
        }
        for(ll i = 0; i < m; i++){
            ll a,b,c;
            cin >> a >> b >> c;
            s.insert(a);
            s.insert(b);
            s.insert(c);
        }
        cout << s.size() << endl;
    }
    
      
    return 0;
}
