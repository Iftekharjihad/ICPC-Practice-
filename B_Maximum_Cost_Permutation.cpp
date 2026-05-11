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
        vector<int> v(n),w(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i]){
                w[v[i]-1]++;
            }
        }
        int x = n-1;
        for(int i = 0; i < n; i++){
            if(!v[i]){
                while(w[x]){
                    x--;
                }
                v[i] = x+1;
                x--;
            }
        }
        int a = 0,b = n-1;
        while(a < n && v[a] == a+1)a++;
        while(b > a && v[b] == b+1)b--;
        cout << b-a+1 << endl;
    }
    
      
    return 0;
}
