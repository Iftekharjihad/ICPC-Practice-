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
        int cnt = 0;
        for(int i = 0; i < n-1; i++){
            if((s[i]=='0' && s[i+1]=='1') || (s[i]=='1' && s[i+1]=='0')){
                cnt++;
            }
        }
        if(cnt == 1)cout << 2 << endl;
        else cout << 1 << endl;
    }
    
      
    return 0;
}