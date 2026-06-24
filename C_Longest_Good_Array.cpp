#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int i;
        for (i = 1; i * (i - 1) <= 2 * (r - l); i++)
        {
        }
        cout << --i << endl;
    }

    return 0;
}
