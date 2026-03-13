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
        if(mul < s){
            cout << -1 << endl;
            continue;
        }
        if(mul == s){
            ans[n-1] = mul;
            for(auto x : ans){
                cout << x << " ";
            }
            cout << endl;
        }
        else{
            ll diff = s - mul;
            if(diff > (k-1)*n){
                cout << -1 << endl;
                continue;
            }
            else{
                ans[0] = mul;
                ll idx = 1,cur = diff,val = k-1;
                while(cur > 0){
                    ans[idx] = val;
                    cur -= val;
                    idx++;
                }
            }
        }
        for(auto x : ans){
            cout << x << " ";
        }
        cout << endl;
    }
    
      
    return 0;
}
