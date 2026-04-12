#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int k,r;
    cin >> k >> r;
    int i = 1;
    while((k*i) % 10 != r && (k*i) % 10 != 0){
        i++;
    }
    cout << i << endl;
      
    return 0;
}
