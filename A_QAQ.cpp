#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    string s;
    cin >> s;
    int n = s.size();
    ll q = 0,qa = 0,ans = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'Q'){
            q++;
            ans = ans + qa;
        }
        if(s[i] == 'A')qa = qa + q;
    }
    cout << ans;
      
    return 0;
}
