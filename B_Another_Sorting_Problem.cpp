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
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        ll x = 0;
        vector<int> ans;
        for(int i = 0; i < n-1; i++){
            if(a[i] > a[i+1]){
                ans.push_back(i);
                x = max(x,a[i]-a[i+1]);
            }
        }
        if(ans.empty()){
            cout << "YES" << endl;
            continue;
        }
        bool ok = true;
        for(int i = 0; i < ans.size()-1; i++){
            int a1 = ans[i];
            int b1 = ans[i+1];
            ll mx = 0;
            for(int j = a1+1; j < b1; j++){
                mx = max(mx,a[j+1]-a[j]);
            }
            if(mx < x){
                ok = false;
                break;
            }
        }
        if(ok)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
      
    return 0;
}
