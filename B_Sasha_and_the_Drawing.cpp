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

        ll d = (4 * n) - 2;

        if (k <= d - 2)
        {
            ll x = (k % 2 == 0 ? k : (k + 1));
            cout << x / 2 << endl;
        }
        else if (k == d - 1)
        {
            cout << ((d - 2) / 2) + 1 << endl;
        }
        else
            cout << 2 * n << endl;
    }

    return 0;
}