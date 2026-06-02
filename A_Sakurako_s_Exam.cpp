#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(a % 2 == 0 && (b % 2 == 0 || a != 0)){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    
      
    return 0;
}
