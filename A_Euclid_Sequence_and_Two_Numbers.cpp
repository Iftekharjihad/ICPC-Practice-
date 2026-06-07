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
        vector<ll> b(n);
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(b.rbegin(),b.rend());
        bool ok = true;
        for(int i = 0; i <= n-3; i++){
            if(b[i] % b[i+1] != b[i+2]){
                ok = false;
                break;
            }
        }
        if(ok)cout << b[0] << " " << b[1] << endl;
        else cout << -1 << endl;
    }
    
      
    return 0;
}
