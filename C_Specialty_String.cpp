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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string res = "";

        for (auto c : s)
        {
            if (!res.empty() && res.back() == c)
            {
                res.pop_back();
            }
            else
            {
                res.push_back(c);
            }
        }
        if (res.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
