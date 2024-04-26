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
        ll a, b, c;
        cin >> a >> b >> c;

        if (b % 3 == 0)
        {
            cout << a + (b / 3) + (c % 3 == 0 ? (c / 3) : ((c / 3) + 1)) << endl;
            continue;
        }

        if (c < (3 - ((b - ((b / 3) * 3)) % 3)))
            cout << -1 << endl;
        else
            cout << a + (b / 3) + (((b - ((b / 3) * 3)) + c) / 3) + ((((b - ((b / 3) * 3)) + c) % 3) > 0 ? 1 : 0) << endl;
    }

    return 0;
}