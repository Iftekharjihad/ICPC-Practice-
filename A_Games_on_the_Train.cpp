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
        vector<int> h(n);
        for(int i = 0; i < n; i++){
            cin >> h[i];
        }
        int mx = *max_element(h.begin(),h.end());
        int k = 0;
        for(auto x : h){
            k = max(k,mx-x+1);
        }
        cout << k << endl;
    }
    
      
    return 0;
}
