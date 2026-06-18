#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int countA = 0, countB = 0, countS = 0;

    for (char c : s) {
        if (c == 'A') countA++;
        if (c == 'B') countB++;
        if (c == 'S') countS++;
    }

    if (countA == 0 && countB == 0) {
        cout << 2 << endl; 
        return;
    }

    if (countA > 0 && countB == 0) {
        cout << countA << endl;
        return;
    }

    if (countB > 0 && countA == 0) {
        cout << countB << endl;
        return;
    }

    cout << 1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}