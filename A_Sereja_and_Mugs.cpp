#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,s;
    cin >> n >> s;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int sum = 0;
    sort(a.begin(),a.end());
    for(int i = 0; i < n-1; i++){
        sum += a[i];
    }
    if(sum <= s)cout << "YES" << endl;
    else cout << "NO" << endl;
      
    return 0;
}
