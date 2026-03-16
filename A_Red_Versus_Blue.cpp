#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,r,b;
        cin >> n >> r >> b;
        string ans = "";
        int k = r/(b+1);
        int extra = r%(b+1);
        for(int i = 0; i < b+1; i++){
            int cnt = k;
            if(extra > 0){
                cnt++;
                extra--;
            }
            ans += string(cnt,'R');
            if(i < b) ans += 'B';
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
