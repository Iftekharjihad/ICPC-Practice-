#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        char a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a == b && b == c && c == d){
            cout << "YES" << endl;
            continue;
        }
        if(a == '1' && b == '0' && c == '0' && d == '1'){
            cout << "YES" << endl;
            continue;
        }
        if(a == '0' && b == '1' && c == '1' && d == '0'){
            cout << "YES" << endl;
            continue;
        }

        cout << "NO" << endl;
    }
    
      
    return 0;
}
