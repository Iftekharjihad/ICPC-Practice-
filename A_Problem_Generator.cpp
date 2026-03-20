#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> cnt(7,0);
        for(char c : s){
            cnt[c - 'A']++;
        }
        int ans = 0;
        for(int i = 0; i < 7; i++){
            if(cnt[i] < m){
                ans += (m - cnt[i]);
            }
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
