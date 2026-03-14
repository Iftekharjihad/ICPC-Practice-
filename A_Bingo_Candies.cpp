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
        map<int,int> mp;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int x;
                cin >> x;
                mp[x]++;
            }
        }
        
        bool ok = true;
        for(auto [a,b] : mp){
            if(b > n*(n-1)){
                ok = false;
                break;
            }
        }
        if(ok)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
      
    return 0;
}
