#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        if(k == 1){
            for(int i = 1; i <= n; i++){
                cout << i << " ";
            }
        }
        else if(k == n){
            for(int i = 1; i <= n; i++){
                cout << 1 << " ";
            }
        }
        else cout << -1;
        cout << endl;
    }
    
      
    return 0;
}
