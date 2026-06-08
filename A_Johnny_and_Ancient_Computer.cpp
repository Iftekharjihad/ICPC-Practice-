#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        int pa = 0,pb = 0;
        while(a % 2 == 0){
            a /= 2;
            pa++;
        }
        while(b % 2 == 0){
            b /= 2;
            pb++;
        }
        if(a != b){
            cout << -1 << endl;
            continue;
        }
        int diff = abs(pa - pb);
        cout << (diff + 2)/3 << endl;
    }
    
      
    return 0;
}
