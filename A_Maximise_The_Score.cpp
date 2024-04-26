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

        ll a[2 * n];

        for (ll i = 0; i < 2 * n; i++)
            cin >> a[i];

        sort(a, a + 2 * n);

        ll sum = 0;
        for (ll i = 0; i < 2 * n; i++)
        {
            if (i % 2 == 0)
                sum += a[i];
        }

        cout << sum << endl;
    }

    return 0;
}