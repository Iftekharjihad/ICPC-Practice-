#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        bool ok = true;
        vector<int> v(n);
        for(int i = 0;i < n; i++){
            int a,b;
            cin >> a;
            b = a % n;
            for(int j = 1; j < m; j++){
                cin >> a;
                if(b != a%n)ok = false;
            }
            if(ok)v[b] = i+1;
        }
        if(ok){
            for(auto x : v){
                cout << x << " ";
            }
            cout << endl;
        }
        else cout << -1 << endl;
    }
    
      
    return 0;
}
