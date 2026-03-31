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
        for(int i = 0; i < n*2; i++){
            for(int j = 0; j < n*2; j++){
                cout << (j/2%2 != i/2%2 ? '.':'#');
            }
            cout << endl;
        }
    }
    
      
    return 0;
}
