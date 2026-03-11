#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    ll n,d;
    cin >> n >> d;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.rbegin(),a.rend());
    int ans = 0,idx = 0;
    for(int i = 0; i < n;){
        int x = d/a[idx] + 1;
        if(i+x <= n)ans++;
        // ans++;
        idx++;
        i += x;
    }
    cout << ans << endl;
      
    return 0;
}
