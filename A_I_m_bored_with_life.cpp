#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    ll n,m,a = 1;
        cin >> n >> m;
        int mn = min(n,m);
        for(int i = 1; i <= mn; i++){
            a *= i;
        }
        cout << a << endl;
    
      
    return 0;
}
