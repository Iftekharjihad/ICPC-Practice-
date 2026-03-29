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
        cout << 2 << " ";
        for(int i = n; i >= 3; i--){
            cout << i << " ";
        }
        cout << 1 << endl;
    }
    
      
    return 0;
}
