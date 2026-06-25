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
        vector<int> a(n);
        vector<int> v(n+1,0);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(auto x : a){
            if(x <= n)v[x]++;
        }
        for(int i = 0; i <= n; i++){
            if(v[i] == 0){
                cout << i << endl;
                break;
            }
        }
    
    }
    
      
    return 0;
}
