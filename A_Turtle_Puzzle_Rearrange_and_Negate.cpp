#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,sum = 0;
        cin >> n;
        while(n--){
            int a;
            cin >> a;
            sum += (int)abs(a);
        }
        cout << sum << endl;
    }
    
      
    return 0;
}
