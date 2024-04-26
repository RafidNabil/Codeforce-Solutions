#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;
const ll M = 1e9 + 7;
// const ll M = 1e18+7;

using namespace std;

set<ll> bd;

void f(ll n, ll m)
{
    if (n == 6)
        return;
    bd.insert(m * 10);
    bd.insert(m * 10 + 1);
    f(n + 1, m * 10);
    f(n + 1, m * 10 + 1);
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tt;
    tt = 1;
    cin >> tt;
    f(1, 1);

    while (tt--)
    {
        ll n;
        cin >> n;

        if (n == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        ll f = 1;

        for (ll i : bd)
        {
            if (i == n)
            {
                f = 0;
                break;
            }
        }

        if (!f)
        {
            cout << "YES" << endl;
            continue;
        }

        while (n > 1)
        {
            ll f2 = 1;
            for (ll i : bd)
            {
                if (n % i == 0)
                {
                    n /= i;
                    f2 = 0;
                    break;
                }
            }

            if (f2)
            {
                f = 0;
                break;
            }
        }

        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}