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
        vector<int> a(51,0);
        int ans = 3;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            if(a[a[i]] == i)ans = 2; 
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
