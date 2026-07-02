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
        int l = 0,r = n-1;
        for(int i = 0; i < n; i++){
            if(a[i] == 1){
                l++;
            }
            else{
                break;
            }
        }
        for(int i = n-1; i >= 0; i--){
            if(a[i] == 1){
                r--;
            }
            else{
                break;
            }
        }
        map<int,int> mp;
        int cnt = 0;
        for(int i = l; i <= r; i++){
            if(mp[a[i]] == 0){
                cnt++;
                mp[a[i]]++;
            }
        }
        if(cnt <= 1)cout << cnt << endl;
        else cout << 2 << endl;
    }
    
      
    return 0;
}
