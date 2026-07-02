#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll n,m,k;
        cin >> n >> m >> k;
        ll ans = min(n,k);
        if((ans & 1) != (k & 1)){
            ans--;
        }
        if(!(m&1)){
            ans = min(ans,n*m-k);
            if((ans & 1) != (k & 1)){
                ans--;
            }
        }
        cout << max(0LL,ans) << endl;
    }
    
      
    return 0;
}
