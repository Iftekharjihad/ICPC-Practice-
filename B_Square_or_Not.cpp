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
        string s;
        cin >> s;
        int cnt = count(s.begin(),s.end(), '1');
        int x = 4*sqrt(n) - 4;
        if(x == cnt){
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
    
      
    return 0;
}
