#include<bits/stdc++.h>
using namespace std;
#define ll long long
char grid[105][105];
bool vis[105][105];
int n,m;
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};

bool valid(int i,int j){
    if(i < 0 || i >= n || j < 0 || j >= m){
        return false;
    }
    return true;
}

void bfs(int si,int sj){

    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;

    while(!q.empty()){
        auto [x,y] = q.front();
        q.pop();

        for(int i = 0; i < 4; i++){
            int ci = x + d[i].first;
            int cj = y + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj]){
                q.push({ci,cj});
                vis[ci][cj] = true;
            }
        }
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
    int si,sj;
    cin >> si >> sj;
    bfs(si,sj);
      
    return 0;
}
