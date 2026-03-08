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
        string s;
        cin >> s;
    string s_max = s;
    bool changed = true;
    while (changed) {
        changed = false;
        for (int i = 1; i < n - 1; i++) {
            if (s_max[i] == '0' && s_max[i - 1] == '1' && s_max[i + 1] == '1') {
                s_max[i] = '1';
                changed = true;
            }
        }
    }
    string s_min = s_max;
    changed = true;
    while (changed) {
        changed = false;
        for (int i = 1; i < n - 1; i++) {
            if (s_min[i] == '1' && s_min[i - 1] == '1' && s_min[i + 1] == '1') {
                s_min[i] = '0';
                changed = true;
            }
        }
    }

    int max_count = count(s_max.begin(), s_max.end(), '1');
    int min_count = count(s_min.begin(), s_min.end(), '1');

    cout << min_count << " " << max_count << endl;
    }
    
      
    return 0;
}
