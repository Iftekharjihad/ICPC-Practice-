#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,x,s;
        cin >> n >> x >> s;
        string u;
        cin >> u;
        vector<int> a(x+1,-1);
        a[0] = 0;
        for(int i = 0; i < n; i++){
            vector<int> v(x+1,-1);
            char c = u[i];
            for(int j = 0; j <= x; j++){
                if(a[j] == -1){
                    continue;
                }
                int sit = a[j];
                int ac = j * s - sit;
                v[j] = max(v[j],sit);
                if(c != 'E' && j < x){
                    v[j+1] = max(v[j+1],sit+1);
                }
                if(c != 'I' && ac > 0){
                    v[j] = max(v[j], sit+1);
                }
            }
            a = v;
        }
        int ans = 0;
        for(int i = 0; i <= x; i++){
            if(a[i] != -1){
                ans = max(ans,a[i]);
            }
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
