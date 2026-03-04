#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,m,d;
        cin >> n >> m >> d;
        int mul = n*m;
        if(mul <= d){
            cout << 1 << endl;
            continue;
        }
        int rem = d/m + 1;
        if(n % rem == 0)cout << n/rem << endl;
        else cout << n/rem + 1 << endl;
    }
    
      
    return 0;
}
