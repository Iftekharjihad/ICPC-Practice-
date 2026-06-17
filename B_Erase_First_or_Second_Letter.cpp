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
        map<char,int> mp;
        ll ans = 0;
        int dis = 0;
        for(int i = 0; i < n; i++){
            if(mp[s[i]] == 0){
                dis++;
                mp[s[i]]++;
            }
            ans += dis;
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
