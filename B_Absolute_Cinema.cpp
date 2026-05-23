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
        vector<ll> a(n),b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        ll sum = 0, mn = 0,mx = 0;
        for(int i = 0; i < n; i++){
            sum += (a[i] + b[i]);
            mn += min(a[i],b[i]);
            mx = max(mx, min(a[i],b[i]));
        }
        cout << sum - mn + mx << endl;
    }
    
      
    return 0;
}
