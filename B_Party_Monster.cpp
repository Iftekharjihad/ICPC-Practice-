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
        int cnt1 = 0,cnt2 = 0;
        for(auto c : s){
            if(c == '(')cnt1++;
            else cnt2++;
        }
        if(cnt1 == cnt2)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
      
    return 0;
}
