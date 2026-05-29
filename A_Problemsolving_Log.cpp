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
        int ans = 0,x = 1;
        for(char c = 'A'; c <= 'Z'; c++){
            ans = ans + (count(s.begin(),s.end(),c) >= x);
            x++;
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
