#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;
    map<ll,int> mp;
    while(n--){
        ll x;
        cin >> x;
        mp[x]++;
    }
    cout << mp.size() << endl;
      
    return 0;
}
