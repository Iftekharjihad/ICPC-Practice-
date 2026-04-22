#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll x,y;
        cin >> x >> y;
        ll n = y/x;
        if(n > 2)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
      
    return 0;
}
