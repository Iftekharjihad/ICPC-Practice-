#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    double a,b,c,x,y,z;
    cin >> a >> b >> c >> x >> y >> z;
    bool ok = false;
    if(a/x == b/y && b/y == c/z)ok = true;
    if(a/x == b/z && b/z == c/y)ok = true;
    if(a/y == b/x && b/x == c/z)ok = true;
    if(a/y == b/z && b/z == c/x)ok = true;
    if(a/z == b/x && b/x == c/y)ok = true;
    if(a/z == b/y && b/y == c/x)ok = true;

    if(ok)cout << "YES" << endl;
    else cout << "NO" << endl;
      
    return 0;
}
