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
        sort(s.begin()+1,s.end());
        ll keep = 0,sum = 0;
        for(auto it : s){
            if(sum + it - '0' <= 9){
                sum += it - '0';
                keep++;
            }
            else break;
        }
        ll ans1 = s.size() - keep;
        s[0] = '1';
        keep = 0,sum = 0;
        for(auto it : s){
            if(sum + it - '0' <= 9){
                sum += it - '0';
                keep++;
            }
            else{
                break;
            }
        }
        ll ans2 = s.size() - keep + 1;
        cout << min(ans1,ans2) << endl;
    }
    
      
    return 0;
}
