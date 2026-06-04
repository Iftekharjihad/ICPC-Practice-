#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> a(n+1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    vector<vector<int>> adj_list(n+1);
    while(m--){
        int u,v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    vector<int> dis(n+1,-1);
    queue<int> q;
    q.push(1);
    dis[1] = 0;
    while(!q.empty()){
        int par = q.front();
        q.pop();
        for(int child : adj_list[par]){
            if(dis[child] == -1){
                dis[child] = dis[par] + 1;
                q.push(child);
            }
        }
    }
    vector<int> ans(k+1,0);
    for(int i = 1; i <= n; i++){
        ans[a[i]] = max(ans[a[i]],dis[i]);
    }
    for(int i = 1; i <= k; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
      
    return 0;
}
