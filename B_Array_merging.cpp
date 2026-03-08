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
        vector<int> a(n),b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        vector<int> A(2*n+5,0),B(2*n+5,0);
        for(int i = 0; i < n;){
            int j = i;
            while(j < n && a[i] == a[j])j++;
            A[a[i]] = max(A[a[i]],j-i);
            i = j;
        }
        for(int i = 0; i < n;){
            int j = i;
            while(j < n && b[i] == b[j])j++;
            B[b[i]] = max(B[b[i]],j-i);
            i = j;
        }
        int ans = 0;
        for(int i = 1; i <= 2*n; i++){
            ans = max(ans,A[i] + B[i]);
        }
        cout << ans << endl;
    }
    
      
    return 0;
}
