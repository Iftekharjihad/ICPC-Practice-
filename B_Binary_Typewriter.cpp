#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n;
        string s;
        cin >> s;
        k = s[0] == '1';
        for(int i = 1; i < n; i++){
            if(s[i] != s[i-1])k++;
        }
        if(k == 2)k = 1;
        else if(k > 2)k -= 2;
        cout << n + k << endl;
    }
    
      
    return 0;
}
