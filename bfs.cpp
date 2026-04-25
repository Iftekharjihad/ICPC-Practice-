#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, m;
vector<string> grid;
vector<vector<int>> vis;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

bool valid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m);
}

int bfs(int sx, int sy) {
    queue<pair<int,int>> q;
    q.push({sx, sy});
    vis[sx][sy] = 1;

    int cnt = 1;
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (valid(nx, ny) && !vis[nx][ny] && grid[nx][ny] == '.') {
                vis[nx][ny] = 1;
                q.push({nx, ny});
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    grid.resize(n);
    for (int i = 0; i < n; i++){
        cin >> grid[i];
    }
    vis.assign(n, vector<int>(m, 0));
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.' && !vis[i][j]) {
                ans.push_back(bfs(i, j));
            }
        }
    }
    if (ans.empty()) {
        cout << 0 << '\n';
        return 0;
    }
    sort(ans.begin(), ans.end());
    for (int x : ans){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}