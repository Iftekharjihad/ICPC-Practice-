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
        int n = s.size();
        vector<int> freq(4,-1);
        freq[0] = 0;
        for(auto c : s){
            int d = c - '0';
            vector<int> v = freq;
            for(int i = 0; i < 4; i++){
                if(freq[i] == -1){
                    continue;
                }
                int x = (i*10 + d) % 4;
                v[x] = max(v[x],freq[i]+1);
            }
            freq = v;
        }
        int ans = max({freq[1], freq[2], freq[3], 0});
        cout << n - ans << endl;
    }
    
      
    return 0;
}
