#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int l,v,T,n;
        cin >> l >> v >> T >> n;
        for(int i = 0; i < n; i++){
            int ti,vi;
            cin >> ti >> vi;
            ll diff = abs(v - vi);
            ll ans = (T - ti) * diff / l + 1;
            if(i > 0)cout << " ";
            cout << ans;
        }
        cout << endl;
    }
    
      
    return 0;
}
