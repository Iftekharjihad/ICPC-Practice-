#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int x,y,n,m;
        cin >> x >> y;
        for(int i = 1;i < 4;i++){
            cin >> m >> n;
            if(m == x){
                cout << (n-y)*(n-y) << endl;
            }
        }
    }
    
      
    return 0;
}
