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
        set<char> st;
        for(auto c : s){
            st.insert(c);
        }
        if(st.size() == n)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
      
    return 0;
}
