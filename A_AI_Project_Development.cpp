#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll n,x,y,z;
        cin >> n >> x >> y >> z;
        ll cnt1 = (n+x+y-1)/(x+y);
        ll setup = x*z;
        ll cnt2;
        if(setup >= n){
            cnt2 = (n+x-1)/x;
        }
        else{
            ll rem = n - setup;
            ll p = (rem + x + 10*y - 1)/(x + 10*y);
            cnt2 = z + p;
        }
        cout << min(cnt1,cnt2) << endl;
    }
    
      
    return 0;
}
