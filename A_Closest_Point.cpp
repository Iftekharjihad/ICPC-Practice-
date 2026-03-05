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
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        if(n < 3 && (a[1] - a[0] > 1)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
      
    return 0;
}
