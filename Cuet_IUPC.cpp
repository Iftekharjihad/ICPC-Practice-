#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<char> st;
        for(auto c : s){
            if(!st.empty() && st.top() == c){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        if(st.empty())cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
      
    return 0;
}
