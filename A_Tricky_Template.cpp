#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    int cnt = 0;
    while(t--){
        int n;
        cin >> n;
        string a,b,c;
        cin >> a >> b >> c;
        for(int i = 0; i < n; i++){
            if(a[i] != c[i] && b[i] != c[i]){
                cout << "YES" << endl;
                cnt++;
                break;
            }
        }
        if(cnt == 0){
            cout << "NO" << endl;
        }
        cnt = 0;
    }
    
      
    return 0;
}
