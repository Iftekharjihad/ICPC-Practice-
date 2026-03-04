#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll ans = 1;
        for(int i = 2; i*i <= n; i++){
            if(n % i == 0){
                ans *= i;
                while(n % i == 0){
                    n /= i;
                }
            }
        }
        ans *= n;
        cout << ans << endl;
    }
    
      
    return 0;
}
