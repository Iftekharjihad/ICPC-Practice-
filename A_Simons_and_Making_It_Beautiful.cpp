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
        int pos = -1;
        for(int i = 0; i < n; i++){
            if(a[i] == n){
                pos = i;
                break;
            }
        }
        if(pos != 0){
            swap(a[0],a[pos]);
        }
        for(auto x : a){
            cout << x << " ";
        }
        cout << endl;
    }
    
      
    return 0;
}
