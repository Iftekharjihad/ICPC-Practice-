#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        cout << max((y+1)/2,(4*y+x+14)/15) << endl;
    }
    
      
    return 0;
}
