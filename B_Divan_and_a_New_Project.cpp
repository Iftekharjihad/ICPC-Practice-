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
        vector<pair<int,int>> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i].first;
            a[i].second = i+1;
        }
        vector<int> pos(n+1);
        pos[0] = 0;
        sort(a.rbegin(),a.rend());
        int left = -1,right = 1;
        ll ans = 0;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                pos[a[i].second] = right;
                ans += 2LL * abs(right) * a[i].first;
                right++;
            }
            else{
                pos[a[i].second] = left;
                ans += 2LL * abs(left) * a[i].first;
                left--;
            }
        }
        cout << ans << endl;
        for(int i = 0; i <= n; i++){
            cout << pos[i] << " ";
        }
        cout << endl;
    }
    
      
    return 0;
}
