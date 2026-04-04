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
        vector<int> ans(3*n);
        int x = 1,y = 3*n;
        for(int i = 0; i < n; i++){
            ans[3*i] = x;
            x++;
            ans[3*i+2] = y;
            y--;
            ans[3*i+1] = y;
            y--;
        }
        for(int i = 0; i < 3*n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    
      
    return 0;
}
