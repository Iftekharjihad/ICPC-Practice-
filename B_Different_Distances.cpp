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
        vector<int> ans(4*n+1);
        for(int i = 1; i <= n; i++){
            ans[i] = i;
        }
        for(int i = 1; i <= n; i++){
            ans[n+i] = i;
        }
        for(int i = 1; i <= n; i++){
            ans[2*n+i] = i%n + 1;;
        }
        for(int i = 1; i <= n; i++){
            ans[3*n+i] = i;
        }
        for(int i = 1; i <= 4*n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    
      
    return 0;
}
