#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,p;
        cin >> n >> p;
        vector<int> a(n),b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        vector<pair<int,int>> v;
        for(int i = 0; i < n; i++){
            v.push_back({b[i],a[i]});
        }
        sort(v.begin(),v.end());
        ll ans = p;
        int rem = n-1,i = 0;
        while(i < n && rem > 0){
            if(v[i].first >= p)break;
            int use = min(rem,v[i].second);
            ans += 1LL * use * v[i].first;
            rem -= use;
            i++;
        }
        ans += 1LL * rem * p;
        cout << ans << endl;
    }
    
      
    return 0;
}
