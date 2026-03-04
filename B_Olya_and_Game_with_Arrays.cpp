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
        ll sum = 0;
        ll mn = LLONG_MAX;
        ll mx = LLONG_MAX;
        for(int i = 0; i < n; i++){
            int m;
            cin >> m;
            vector<ll> a(m);
            for(int j = 0; j < m; j++){
                cin >> a[j];
            }
            sort(a.begin(),a.end());
            ll mn1 = a[0],mn2 = a[1];
            sum += mn2;
            mn = min(mn,mn1);
            mx = min(mx,mn2);
        }
        cout << sum + mn - mx << endl;
    }
    
      
    return 0;
}
