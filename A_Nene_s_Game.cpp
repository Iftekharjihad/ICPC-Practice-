#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int k,q;
        cin >> k >> q;
        vector<int> a(k);
        for(int i = 0; i < k; i++){
            cin >> a[i];
        }
        while(q--){
            int n;
            cin >> n;
            cout << min(n,a[0]-1) << " ";
        }
        cout << endl;
    }
    
      
    return 0;
}
