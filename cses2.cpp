#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    ll n;
    cin >> n;
    ll sum = 0;
    for(int i = 1; i < n; i++){
        int x;
        cin >> x;
        sum += x;
    }
    cout << (n*(n+1))/2 - sum << endl;
      
    return 0;
}
