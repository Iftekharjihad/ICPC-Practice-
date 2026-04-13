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
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.rbegin(),a.rend());
        bool ok = false;
        for(int i = 0; i < n-1; i++){
            if(a[i] == a[i+1]){
                ok = true;
                break;
            }
        }
        if(ok){
            cout << -1 << endl;
            continue;
        }
        for(auto &val : a){
            cout << val << " ";
        }
        cout << endl;
    }
    
      
    return 0;
}
