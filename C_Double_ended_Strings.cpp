#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        string a,b;
        cin >> a >> b;
        int n = a.size(), m = b.size();
        int ans = 0;
        for(int len = 1; len <= min(n,m); len++){
            for(int i = 0; i+len <= n; i++){
                for(int j = 0; j+len <= m; j++){
                    if(a.substr(i,len) == b.substr(j,len)){
                        ans = max(ans,len);
                    }
                }
            }
        }
        cout << a.size() + b.size() - 2*ans << endl;
    }
    
      
    return 0;
}
