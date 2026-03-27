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
        if(n % 2)cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            int res = n/2;
            for(int i = 1; i <= res; i++){
                if(i%2)cout << "AA";
                else cout << "BB";
            }
            cout << endl;
        }
    }
    
      
    return 0;
}
