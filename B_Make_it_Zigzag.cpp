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
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int mx = 0;
        for(int i = 0; i < n; i++){
            mx = max(mx,a[i]);
            if(i % 2 == 1){
                a[i] = mx;
            }
        }
        ll ans = 0;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                ll left = (i > 0 ? a[i-1] : INT_MAX);
                ll right = (i+1 < n) ? a[i+1] : INT_MAX;
                ll mn = min(left,right);
                ll diff = a[i] - (mn-1);
                if(diff > 0){
                    ans += diff;
                }
            }
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
