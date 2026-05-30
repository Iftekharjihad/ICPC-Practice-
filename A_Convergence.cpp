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
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        int ans = n/2;
        int i = 0;
        while(i < n){
            int j = i;
            while(j < n && a[j] == a[i]){
                j++;
            }
            int l = i,r = n-j;
            ans = min(ans,max(l,r));
            i = j;
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
