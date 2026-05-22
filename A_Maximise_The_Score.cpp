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
        vector<int> a(n*2);
        for(int i = 0; i < n*2; i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        ll ans = 0;
        for(int i = 0; i < 2*n; i+=2){
            ans += a[i];
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
