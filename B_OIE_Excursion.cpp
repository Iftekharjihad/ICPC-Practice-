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
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        unordered_set<ll> s;
        for(int i = 0; i < n; i++){
            ll x = ((m - ((a[i] + i + 1) % m)) % m);
            s.insert(x);
        }
        if(s.size() == m)cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
      
    return 0;
}