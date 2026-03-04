#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll res = (n/2)+1;
        cout << (n%res)+1 << endl;
    }
    
      
    return 0;
}
