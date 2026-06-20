#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        char ch = s[0];
        int ans = 0;
        // for(int i = 0; i < n-1;){
        //     if(s[i] == s[i+1] && i+1 < n){
        //         if(s[i] == '0')ans += 2;
        //         else ans++;
        //         i+=2;
        //     }
        //     else if(s[i] == '0' && s[i+1] != '0'){
        //         ans++;
        //         i++;
        //     }
        //     else if(s[i] != '0' && s[i] == '0'){

        //     }
        // }
        int i = 0;
        bool b = false;
        while(s.size() >= 2){
            if(s[0] == s[1]){
                if(s[0] == '0')ans += 2;
                else ans++;
                s.erase(0,2);
            }
            else if(s[i] == '0' && s[i+1] != '0'){
                ans++;
                s.erase(0,1);
            }
            else if(s[i] != '0' && s[i+1] == '0'){
                b = true;
                break;
            }
        }
        if(b){
            cout << ans << endl;
            continue;
        }

        if(s.empty()){
            cout << ans << endl;
        }
        else{
            if(s[0] != '0')cout << "INVALID" << endl;
            else cout << ans+1 << endl;
        }
    }
    
      
    return 0;
}
