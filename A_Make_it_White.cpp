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

        ll l = -1, r = -1;

        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                l = i;
                break;
            }
        }

        for (ll i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                r = i;
                break;
            }
        }

        if (l == -1 && r == -1)
            cout << 0 << endl;
        else
            cout << r - l + 1 << endl;
    }

    return 0;
}