#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        
        bool transposed = false;
        if(n > m){
            swap(n, m);
            transposed = true;
        }

        cout << min(m, 2 * n) << "\n";

        int w = min(n, m - n);
        int B = n * n;

        auto val = [&](int i, int j) -> int {
            if(j < n)
                return min(i + 1, j + 1);
            int k = j - n;
            if(k < w)
                return B + i * w + k + 1;
            return B + (i + 1) * w;
        };

        if(!transposed){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    cout << val(i, j);
                    if(j < m - 1) cout << " ";
                }
                cout << "\n";
            }
        } else {
            for(int r = 0; r < m; r++){
                for(int c = 0; c < n; c++){
                    cout << val(c, r);
                    if(c < n - 1) cout << " ";
                }
                cout << "\n";
            }
        }
    }
    return 0;
}