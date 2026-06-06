#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        string s = to_string(a);
        if(s.size() < 3){
            cout << "NO" << endl;
            continue;
        }
        string x;
        if(s[0] == '1' && s[1] == '0'){
            if(s[2] == '0'){
                cout << "NO" << endl;
                continue;
            }
            for(int i = 2; i < s.size(); i++){
                x.push_back(s[i]);
            }
            if(x.empty()){
                cout << "NO" << endl;
                continue;
            }
            int num = stoi(x);
            if(num >= 2)cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
      
    return 0;
}
