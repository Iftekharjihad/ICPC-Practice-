#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string x,y;
        cin >> x >> y;
        int p = 0;
        for(int i = 0; i < y.size(); i++){
            if(x[p] == y[i])p++;
        }
        cout << p << endl;
    }
    
      
    return 0;
}
