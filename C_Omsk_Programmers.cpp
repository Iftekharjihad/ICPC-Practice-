#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<pair<ll,ll>> func(ll x,ll y){
    vector<pair<ll,ll>> ans;
    ll cur = x, cost = 0;
    ans.push_back({cur,cost});
    while(cur > 0){
        cur /= y;
        cost++;
        ans.push_back({cur,cost});
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll a,b,x;
        cin >> a >> b >> x;
        ll ans = abs(a-b);
        for(int i = 0; i <= 1; i++){
            for(int j = 0; j <= 1; j++){
                auto m = func(a+i,x);
                auto n = func(b+j,x);
                for(auto val1 : m){
                    for(auto val2 : n){
                        ans = min(ans,i+j+val1.second+val2.second+ abs(val1.first - val2.first));
                    }
                }
            }
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
