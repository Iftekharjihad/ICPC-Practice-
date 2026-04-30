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
        int sz = 2*n;
        vector<int> a(sz+1);
        for(int i = 1; i <= sz; i++){
            cin >> a[i];
        }
        int mx = 0;
        for(int i = 1; i <= sz; i++){
            vector<int> freq(n+1,0);
            int l = i,r = i;
            freq[a[i]]++;
            while(true){
                int ans = 0;
                while(ans <= n && freq[ans] > 0){
                    ans++;
                }
                mx = max(mx,ans);
                if(l == 1 || r == sz)break;
                if(a[l-1] != a[r+1]){
                    break;
                }
                l--;
                r++;
                freq[a[l]]++;
                freq[a[r]]++;
            }
        }
        for(int i = 1; i <= sz; i++){
            if(a[i] != a[i+1]){
                continue;
            }
            vector<int> freq(n+1,0);
            int l = i,r = i+1;
            freq[a[l]]++;
            freq[a[r]]++;
            while(true){
                int ans = 0;
                while(ans <= n && freq[ans] > 0){
                    ans++;
                }
                mx = max(mx,ans);
                if(l == 1 || r == sz)break;
                if(a[l-1] != a[r+1]){
                    break;
                }
                l--;
                r++;
                freq[a[l]]++;
                freq[a[r]]++;
            }
        }
        cout << mx << endl;
    }
    
      
    return 0;
}
