#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        vector<ll>cnt(k+1,0);
        ll a = 0,b = 0;
        for (int i=0; i<k; i++){
            int n;
            cin >> n;
            if((k-2)%n == 0 && cnt[(k-2)/n] != 0){
                a = n;
                b = (k-2)/n;
            }
            cnt[n]++;
        }
        cout << a << " " << b << endl;
    }
    
      
    return 0;
}
