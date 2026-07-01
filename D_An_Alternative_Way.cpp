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
        vector<ll> a(n),b(n),d(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        ll preA = 0,preB = 0;
        bool ok = true;
        for(int i = 0; i < n; i++){
            preA += a[i];
            preB += b[i];
            if(preA > preB){
                ok = false;
                break;
            }
        }
        if(ok)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
      
    return 0;
}
