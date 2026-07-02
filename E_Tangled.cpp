#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll pos = 0,neg = 0;
        for(int i = 0; i < n; i++){
            ll x,y;
            cin >> x >> y;
            ll u = x-y;
            if(u < 0)neg++;
            else if(u > 0)pos++;
        }
        ll total = (ll)n * (n-1)/2;
        ll bad = neg * (neg-1)/2 + pos * (pos-1)/2;
        ll ans = total - bad;
        cout << ans << endl;
    }
    
      
    return 0;
}
