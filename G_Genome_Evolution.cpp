#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(c == 1)cout << a << endl;
        else if(c == 2)cout << b << endl;
        else cout << (a&b) << endl;
    }
    
      
    return 0;
}
