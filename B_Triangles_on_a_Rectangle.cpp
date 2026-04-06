#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int w,h;
        cin >> w >> h;
        vector<vector<int>> v(5);
        for(int i = 1; i <= 4; i++){
            int k;
            cin >> k;
            while(k--){
                int x;
                cin >> x;
                v[i].push_back(x);
            }
        }
        int mx1 = 0,mx2 = 0;
        for(int i = 1; i <= 4; i++){
            int mx_ele = *max_element(v[i].begin(),v[i].end());
            int mn_ele = *min_element(v[i].begin(),v[i].end());
            int val = mx_ele - mn_ele;
            if(i == 1 || i == 2){
                mx1 = max(mx1,val);
            }
            else{
                mx2 = max(mx2,val);
            }
        }
        ll ans1 = 1LL * mx1 * h,ans2 = 1LL * mx2 * w;
        cout << max(ans1,ans2) << endl;
    }
    
      
    return 0;
}
