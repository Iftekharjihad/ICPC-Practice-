#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        map<ll,ll> mp;
        for(int i = 0; i < n; i++){
            ll x;
            cin >> x;
            ll need = (k - x % k) % k;
            if(need){
                mp[need]++;
            }
        }
        ll ans = 0;
        for(auto [need,cnt] : mp){
            ans = max(ans, need + (cnt - 1) * k + 1);
        }

        cout << ans << '\n';
    }
}