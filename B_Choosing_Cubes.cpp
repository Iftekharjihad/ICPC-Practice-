#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,f,k;
        cin >> n >> f >> k;
        vector<int> a(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int cnt = 0,cnt2 = 0;
        for(int i = 1; i <= n; i++){
            if(a[i] >= a[f])cnt++;
            if(a[i] > a[f])cnt2++;
        }
        if(cnt > k && cnt2 < k){
            cout << "MAYBE" << endl;
        }
        if(cnt2 >= k){
            cout << "NO" << endl;
        }
        if(cnt <= k){
            cout << "YES" << endl;
        }
    }
    
      
    return 0;
}
