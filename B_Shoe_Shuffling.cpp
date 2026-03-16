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
        vector<ll> a(n),p(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        bool ok = true;
        for(int i = 0; i < n;){
            int j = i;
            while(j < n && a[j] == a[i])j++;
            int len = j-i;
            if(len == 1){
                ok = false;
                break;
            }
            for(int k = i; k < j-1; k++){
                p[k] = k + 2;
            }
            p[j-1] = i+1;
            i = j;
        }
        if(!ok)cout << -1 << endl;
        else{
            for(auto x : p){
                cout << x << " ";
            }
            cout << endl;
        }
    }
    
      
    return 0;
}
