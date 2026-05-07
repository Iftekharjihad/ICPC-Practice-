#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> adj_list[1005];
int vis[1005];

void dfs(int src){
    cout << src << " ";
    vis[src] = true;
    for(auto child : adj_list[src]){
        if(!vis[child]){
            dfs(child);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,e;
    cin >> n >> e;
    while(e--){
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int src,dst;
    cin >> src >> dst;
    dfs(src);
      
    return 0;
}
