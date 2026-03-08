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
        string s;
        cin >> s;
        vector<int> pref(n),suff(n);
        vector<int> vis(26,0);
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(!vis[s[i]-'a']){
                cnt++;
                vis[s[i]-'a'] = 1;
            }
            pref[i] = cnt;
        }
        fill(vis.begin(),vis.end(),0);
        cnt = 0;
        for(int i = n-1; i >= 0; i--){
            if(!vis[s[i]-'a']){
                cnt++;
                vis[s[i]-'a'] = 1;
            }
            suff[i] = cnt;
        }
        int ans = 0;
        for(int i = 0; i < n-1; i++){
            ans = max(ans,pref[i]+suff[i+1]);
        }
        cout << ans << endl;
    }
      
    return 0;
}
