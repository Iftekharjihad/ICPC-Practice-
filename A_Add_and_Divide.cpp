#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        int ans = INT_MAX;
        for(int i = 0; i <= 30; i++){
            ll x = a;
            ll y = b + i;
            if(y == 1)continue;
            int cnt = i;
            while(x > 0){
                x /= y;
                cnt++;
            }
            ans = min(ans,cnt);
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
