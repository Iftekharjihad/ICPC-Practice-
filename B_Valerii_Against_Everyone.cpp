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
        set<ll> s;
        for(int i = 0; i < n; i++){
            ll x;
            cin >> x;
            s.insert(x);
        }
        if(s.size() == n)cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
      
    return 0;
}
