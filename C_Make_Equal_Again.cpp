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
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int i = 0,j = n-1;
        while(j >= 0 && a[j] == a[n-1])j--;
        while(i < n && a[i] == a[0])i++;
        if(a[0] == a[n-1]){
            if(j+1)cout << j-i+1 << endl;
            else cout << 0 << endl;
        }
        else{
            cout << min(j+1,n-i) << endl;
        }
    }
    
      
    return 0;
}
