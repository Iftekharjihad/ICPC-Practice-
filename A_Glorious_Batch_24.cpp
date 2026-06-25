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
        cout << n - (n/2) - (n/3) + (n/6) << endl;
    }
    
      
    return 0;
}
