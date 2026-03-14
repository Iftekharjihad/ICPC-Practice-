#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll n,k,b,s;
        cin >> n >> k >> b >> s;
        vector<ll> ans(n,0);
        ll mul = k*b;
        if(s < mul){
            cout << -1 << endl;
            continue;
        }
        ll diff = s - mul;
        if(diff > (k-1)*n){
            cout << -1 << endl;
            continue;
        }
        ans[0] = mul;
        ll idx = 0;
        while(diff > 0 && idx < n){
            ll take = min(diff,k-1);
            ans[idx] += take;
            diff -= take;
            idx++;
        }
        
        for(auto x : ans){
            cout << x << " ";
        }
        cout << endl;
    }
    
      
    return 0;
}
