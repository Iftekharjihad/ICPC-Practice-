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
        int a[n+1],k = 1;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        sort(a+1,a+n+1);
        int u = (n+1)/2;
        int c = a[u];
        for(int i = u+1; i <= n; i++){
            if(a[i] == c)k++;
        }
        cout << k << endl;
    }
    
      
    return 0;
}
