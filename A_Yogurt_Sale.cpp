#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;
        int rem,x,y;
        rem = n/2;
        x = n*a;
        if(n % 2 == 0){
            y = rem * b;
        }
        else{
            y = rem * b + a;
        }
        cout << min(x,y) << endl;
    }
    
      
    return 0;
}
