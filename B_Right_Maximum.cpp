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
        int cur = 0;
        int ans = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x > cur){
                cur = x;
            }
            if(x == cur){
                ans++;
            }
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
