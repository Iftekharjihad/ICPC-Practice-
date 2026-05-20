#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string s = "";
        for(int i = 0; i < k; i++){
            s += i + 'a';
        }
        for(int i = 1; i <= n; i++){
            cout << s;
        }
        cout << endl;
    }
    
      
    return 0;
}
