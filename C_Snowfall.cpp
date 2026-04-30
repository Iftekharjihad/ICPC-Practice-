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
        vector<int> a,b,c,d;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x % 2 == 0 && x % 3 == 0){
                a.push_back(x);
            }
            else if(x % 2 == 0)b.push_back(x);
            else if(x % 3 == 0)c.push_back(x);
            else d.push_back(x);
        }
        vector<int> ans;
        for(auto val : a){
            ans.push_back(val);
        }
        for(auto val : b){
            ans.push_back(val);
        }
        for(auto val : d){
            ans.push_back(val);
        }
        for(auto val : c){
            ans.push_back(val);
        }

        for(auto x : ans){
            cout << x << " ";
        }
        cout << endl;
    }
    
      
    return 0;
}
