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
        int ans = 0;
        for(auto c : s){
            ans++;
            if(c == 'L'){
                break;
            }
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
