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
        string x,y;
        cin >> x >> y;
        int a = 0,b = 0;
        while(n--){
            if(x[n] != y[n]){
                x[n] == '0' ? a++ : b++;
            }
        }
        cout << max(a,b) << endl;
    }
    
      
    return 0;
}
