#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll n,c,k;
        cin >> n >> c >> k;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        for(int i = 0; i < n; i++){
            if(c >= a[i]){
                ll use = min(k, c - a[i]);
                c += (a[i] + use);
                k -= use;
            }
            else{
                break;
            }
        }
        cout << c << endl;
    }
    
      
    return 0;
}
