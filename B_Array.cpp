#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> ans(n);
        for(int i = 0; i < n; i++){
            int s = 0,g = 0;
            for(int j = i+1; j < n; j++){
                if(a[j] < a[i])s++;
                else if(a[j] > a[i])g++;
            }
            ans[i] = max(s,g);
        }
        for(auto x : ans){
            cout << x << " ";
        }
        cout << endl;
    }
    
      
    return 0;
}
