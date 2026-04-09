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
        vector<int> a(200,0);
        int ans = 0,x;
        for(int i = 1; i <= n; i++){
            cin >> x;
            a[x]++;
            if(a[x] % 3 == 0)ans++;
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
