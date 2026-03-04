#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        cout << (((n+1)*n/2 - (n-k)*(n-k+1)/2)%2?"NO":"YES") << endl;
    }
    
      
    return 0;
}
