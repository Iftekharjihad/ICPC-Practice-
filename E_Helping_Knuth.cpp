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
        vector<int> a(n+1);
        vector<int> m;
        bool vis[n+1];
        memset(vis,false,sizeof(vis));

        for(int i = 1; i <= n; i++){
            cin >> a[i];
            vis[a[i]] = true;
        }
        for(int i = 1; i <= n; i++){
            if(!vis[i])m.push_back(i);
        }
        sort(m.rbegin(),m.rend());
        int idx = 0;
        for(int i = 1; i <= n; i++){
            if(a[i] == -1){
                a[i] = m[idx];
                idx++;
            }
        }
        for(int i = 1; i <= n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    
      
    return 0;
}
