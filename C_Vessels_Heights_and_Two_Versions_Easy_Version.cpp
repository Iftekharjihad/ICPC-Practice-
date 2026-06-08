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
        vector<ll> h(n);
        for(int i = 0; i < n; i++){
            cin >> h[i];
        }
        for(int i = 0; i < n; i++){
            vector<ll> x(n+1,0);
            for(int j = n-1; j >= 0; j--){
                x[j] = max(x[j+1],h[(i+j)%n]);
            }
            ll ans = 0;
            ll mx = 0;
            for(int j = 1; j <= n-1; j++){
                mx = max(mx,h[(i+j-1)%n]);
                ans += min(mx,x[j]);
            }
            cout << ans << " ";
        }
        cout << endl;
    }
    
      
    return 0;
}
