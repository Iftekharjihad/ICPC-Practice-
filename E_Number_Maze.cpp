#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,j,k;
        cin >> n >> j >> k;
        string s = to_string(n);
        vector<string> p;
        do{
            p.push_back(s);
        }
        while(next_permutation(s.begin(),s.end()));
        string a = p[j-1],b = p[k-1];
        int len = a.size();
        int A = 0,B;
        for(int i = 0; i < len; i++){
            if(a[i] == b[i])A++;
        }
        B = len - A;
        cout << A << "A" << B << "B" << endl;
    }
    
      
    return 0;
}
