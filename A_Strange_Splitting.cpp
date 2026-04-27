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
        for(int i = 0;i < n; i++){
            cin >> a[i];
        }
        if(a[0] == a[n-1])cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            cout << "BR";
            for(int i = 0; i < n-2; i++){
                cout << "B";
            }
            cout << endl;
        }
    }
    
      
    return 0;
}
