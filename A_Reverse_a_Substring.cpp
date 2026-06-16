#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> suf(n);
    suf[n-1] = s[n-1];

    for(int i = n-2; i >= 0; i--){
        suf[i] = min(suf[i+1],s[i]);
    }
    int l = -1;
    for(int i = 0; i < n-1; i++){
        if(suf[i+1] < s[i]){
            l = i;
            break;
        }
    }
    if(l == -1){
        cout << "NO" << endl;
        return 0;
    }
    char target = suf[l+1];
    int r = -1;

    for(int i = n-1; i > l; i--){
        if(s[i] == target){
            r = i;
            break;
        }
    }
    cout << "YES" << endl;
    cout << l+1 << " " << r+1 << endl;
      
    return 0;
}
