#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll x,y;
        cin >> x >> y;
        if((x - 2 * y) % 3 == 0 && (x - 2 * y) >= 0 && (x + 4 * y) >= 0) {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
      
    return 0;
}
