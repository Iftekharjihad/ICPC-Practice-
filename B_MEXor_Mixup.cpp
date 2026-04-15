#include<bits/stdc++.h>
using namespace std;
#define ll long long

int op(int n){
    if(n % 4 == 0)return n;
    if(n % 4 == 1)return 1;
    if(n % 4 == 2)return n+1;
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int x = op(a-1);
        if(x == b)cout << a << endl;
        else if((x^b) == a)cout << a+2 << endl;
        else cout << a+1 << endl;
    }
    
      
    return 0;
}
