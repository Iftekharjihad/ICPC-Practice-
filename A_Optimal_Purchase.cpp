#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll n,a,b;
        cin >> n >> a >> b;
        int div = n/3,rem = n%3;
        ll indivisual = 3*a;
        ll ans;
        if(b >= indivisual){
            ans = n*a;
        }
        else{
            ans = div*b;
            ans += min(rem*a, b);
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
