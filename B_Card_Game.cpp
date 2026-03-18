#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int s = 0,t = 0,ans = 0;
        
        if(a > c)s++;
        else if(a < c)t++;
        if(b > d)s++;
        else if(b < d)t++;
        if(s > t)ans++;

        s = t = 0;
        if(b > c)s++;
        else if(b < c)t++;
        if(a > d)s++;
        else if(a < d)t++;
        if(s > t)ans++;

        s = t = 0;
        if(a > d)s++;
        else if(a < d)t++;
        if(b > c)s++;
        else if(b < c)t++;
        if(s > t)ans++;

        s = t = 0;
        if(b > d)s++;
        else if(b < d)t++;
        if(a > c)s++;
        else if(a < c)t++;
        if(s > t)ans++;

        cout << ans << endl;
    }
    
      
    return 0;
}
