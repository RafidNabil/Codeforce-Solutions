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
        ll n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        if ((k & 1) == 0)
        {
            sort(s.begin(), s.end());

            cout << s << endl;
        }
        else
        {
            vector<char> e;
            vector<char> o;

            for (ll i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                    e.pb(s[i]);
                else
                    o.pb(s[i]);
            }

            sort(e.begin(), e.end());
            sort(o.begin(), o.end());

            for (ll i = 0; i < n / 2; i++)
                cout << e[i] << o[i];
            if (n % 2 == 1)
                cout << e.back() << endl;
            else
                cout << endl;
        }
    }

    return 0;
}
