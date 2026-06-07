#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    ll p[12] = {0,1,2,3,4,5,6,7,8,9,22,11};
    while(t--){
        ll n;
        cin >> n;
        ll rem = n % 12;
        ll a = p[rem];
        if(a > n)cout << -1 << endl;
        else cout << a << " " << n-a << endl;
    }
    
      
    return 0;
}
