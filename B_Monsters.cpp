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
        vector<ll> a(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        vector<pair<int,int>> v;
        for(int i = 1; i <= n; i++){
            int rem = a[i] % k;
            if(rem == 0)rem = k;
            v.push_back({rem,i});
        }
        sort(v.begin(),v.end(), [](auto &a, auto &b){
            if(a.first == b.first) return a.second < b.second;
            return a.first > b.first;
        });
        for(auto [x,y] : v){
            cout << y << " ";
        }
        cout << endl;
    }
    
      
    return 0;
}
