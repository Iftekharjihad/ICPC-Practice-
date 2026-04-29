#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[102] = {0};
        int m = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            a[x]++;
            if(a[x] > m){
                m = a[x];
            }
        }
        if(m >= k)cout << k-1 << endl;
        else cout << n << endl;
    }
      
    return 0;
}
