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
        vector<int> ans;
        int cnt = 0;
        for(int i = n-1; i >= 0; i--){
            ll x;
            if(cnt % 2 == 0){
                x = a[i];
            }
            else{
                x = -a[i];
            }
            if(x < 0){
                ans.push_back(i+1);
                cnt++;
            }
        }
        reverse(ans.begin(),ans.end());
        cout << ans.size() << endl;
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    
      
    return 0;
}
