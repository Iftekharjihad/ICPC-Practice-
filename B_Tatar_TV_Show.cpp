#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> freq(k,0);
        for(int i = 0; i < n; i++){
            freq[i%k] += s[i] - '0';
        }
        bool ok = true;
        for(int i = 0; i < k; i++){
            if(freq[i] % 2 != 0){
                ok = false;
            }
        }
        if(ok)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
      
    return 0;
}
