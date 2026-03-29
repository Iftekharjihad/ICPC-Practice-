#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> p(n+1);

        for(int i=1;i<=n;i++){
            cin >> p[i];
        }

        int ans = 0;

        for(int i=1;i<=n;i++){
            if(p[i] == i) break;
            ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}