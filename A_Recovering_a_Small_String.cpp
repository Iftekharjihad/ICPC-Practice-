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
        int v1 = max(1,n-52);
        int r = n - v1;
        int v2 = max(1,r-26);
        int v3 = r - v2;
        char c1 = 'a' + v1 - 1;
        char c2 = 'a' + v2 - 1;
        char c3 = 'a' + v3 - 1;
        cout << c1 << c2 << c3 << endl;
    }
    
      
    return 0;
}
