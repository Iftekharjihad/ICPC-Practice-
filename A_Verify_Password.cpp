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
        cout<<(is_sorted(s.begin(),s.end())?"YES":"NO")<<endl;
    }
    
      
    return 0;
}
