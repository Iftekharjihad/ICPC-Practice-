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
        int cnt0 = 0,cnt1 = 0,cnt2 = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x == 0)cnt0++;
            else if(x == 1)cnt1++;
            else cnt2++;
        }
        int ans = cnt0;
        int sum = min(cnt1,cnt2);
        ans += sum;
        cnt1 -= sum,cnt2 -= sum;

        ans += cnt1/3;
        ans += cnt2/3;

        cout << ans << endl;
    }
    
      
    return 0;
}
