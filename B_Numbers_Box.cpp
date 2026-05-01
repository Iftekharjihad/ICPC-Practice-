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
        int sum = 0,mn = 1e9,neg = 0;
        bool zero = false;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int x;
                cin >> x;
                sum += abs(x);
                if(x < 0)neg++;
                if(x == 0)zero = true;

                mn = min(mn,abs(x));
            }
        }
        if(neg % 2 == 0 || zero)cout << sum << endl;
        else{
            cout << sum - 2*mn << endl;
        }
    } 
      
    return 0;
}
