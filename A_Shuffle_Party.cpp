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
        int ans = 1;
        while(ans*2 <= n){
            ans = ans*2;
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
