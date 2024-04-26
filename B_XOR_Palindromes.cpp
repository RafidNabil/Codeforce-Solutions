#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tt;
    tt = 1;
    cin >> tt;

    while (tt--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        ll m = 0, um = 0;
        ll p = 0, q = n - 1;

        for (ll i = 0; i < n / 2; i++)
        {
            if (s[p] == s[q])
                m++;
            else
                um++;
            p++;
            q--;
        }

        ll ans[n + 1] = {0};

        ans[um] = 1;
        if ((n & 1) == 1)
            ans[um+1] = 1;

        for (ll i = 0; i < m; i++)
        {
            ans[um + ((i + 1) * 2)] = 1;

            if ((n & 1) == 1)
                ans[(um + ((i + 1) * 2)) + 1] = 1;
        }

        for (auto i : ans)
            cout << i;

        cout << endl;
    }

    return 0;
}