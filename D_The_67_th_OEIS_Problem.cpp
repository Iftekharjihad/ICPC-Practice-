#include<bits/stdc++.h>
using namespace std;
#define ll long long

// ll lcm(ll a,ll b){
//     if(a == 0 || b == 0)return 0;
//     return (a / __gcd(a,b)) * b;
// }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++){
            cout << 1LL*i*(i+1) << " ";
        }
        cout << endl;
    }
    
      
    return 0;
}
