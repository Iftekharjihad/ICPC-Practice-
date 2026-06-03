#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool fair(ll n){
    ll tmp = n;
    while(tmp > 0){
        int d = tmp % 10;
        if(d != 0 && n % d != 0){
            return false;
        }
        tmp /= 10;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        while(!fair(n)){
            n++;
        }
        cout << n << endl;
    }
      
    return 0;
}
