#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    stack<char> s1, s2;

    while(n--){
        string s;
        cin >> s;

        if(s == "TYPE"){
            char c;
            cin >> c;
            s1.push(c);
            while(!s2.empty()){
                s2.pop();
            }
        }else if(s == "UNDO"){
            if(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }else if(s == "REDO"){
            if(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
    }

    string ans = "";
    while(!s1.empty()){
        ans += s1.top();
        s1.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}