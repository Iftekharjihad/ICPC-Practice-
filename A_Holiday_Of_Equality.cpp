#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;
    int num,mx = 0,cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> num;
        cnt += num;
        mx = max(mx,num);
    }
    cout << (mx*n) - cnt << endl;
      
    return 0;
}
