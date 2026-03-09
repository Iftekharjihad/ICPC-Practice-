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
        char c;
        cin >> c;
        string s;
        cin >> s;
        s = s+s;
        int mx_len = 0,nxt_g = INT_MAX;
        for(int i = 2*n - 1; i >= 0; i--){
            if(s[i] == 'g')nxt_g = i;
            if(i < n && s[i] == c){
                mx_len = max(mx_len,nxt_g-i);
            }
        }
        cout << mx_len << endl;
    }
    
      
    return 0;
}
