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
        vector<string> grid(n);
        for(int i = 0; i < n; i++){
            cin >> grid[i];
        }
        int minrow = n,mxrow = -1;
        int mincol = m,mxcol = -1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == '#'){
                    minrow = min(minrow, i);
                    mxrow = max(mxrow, i);
                    mincol = min(mincol, j);
                    mxcol = max(mxcol, j);
                }
            }
        }
        int cRow = (minrow + mxrow)/2 + 1;
        int cCol = (mincol + mxcol)/2 + 1;

        cout << cRow << " " << cCol << endl;
    }
    
      
    return 0;
}
