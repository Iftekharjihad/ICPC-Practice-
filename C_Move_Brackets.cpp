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
        int cnt = 0,ans = 0;
        for(auto c : s){
            if(c == '(')cnt++;
            else cnt--;
            if(cnt < 0){
                ans++;
                cnt = 0;
            }
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
