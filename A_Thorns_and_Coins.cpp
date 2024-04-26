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

        ll ft = -1;

        for (ll i = 1; i < n; i++)
        {
            if (s[i] == '*' && s[i - 1] == '*')
            {
                ft = i - 1;
                break;
            }
        }

        ll cnt = 0;

        if (ft == -1)
            ft = n;

        for (ll i = 0; i < ft; i++)
        {
            if (s[i] == '@')
                cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}