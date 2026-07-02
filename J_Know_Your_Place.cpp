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
        vector<ll> a(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int idx = 1;
        bool ok = true;
        while(idx <= n){
            if(a[idx] <= idx){
                idx++;
            }
            else{
                ok = false;
                break;
            }
        }
        if(ok)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
      
    return 0;
}
