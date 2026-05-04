#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,f{0};
        cin >> n;
        int a[222222];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            if(a[i] < a[i-1])f++;
        }
        if(a[n] > a[1])f++;
        if(f > 1)cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
      
    return 0;
}
