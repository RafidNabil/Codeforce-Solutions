#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;
ll a[10000001];

void f()
{
    for (ll i = 2; i <= 10000001; i++)
    {
        if (a[i] == 0)
        {
            for (ll j = i * i; j <= 10000001; j += i)
                a[j] = 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tt;
    tt = 1;
    cin >> tt;
    f();
    while (tt--)
    {

        ll l, r, f2 = 0;
        cin >> l >> r;

        for (ll i = l; i <= r; i++)
        {
            ll f1 = 0;
            if (a[i] != 0)
            {
                for (ll j = 1; j < i; j++)
                {
                    ll p = j, q = i - j;
                    if (__gcd(p, q) != 1)
                    {
                        cout << p << " " << q << endl;
                        f1 = 1;
                        break;
                    }
                }
            }

            if (f1)
            {
                f2 = 1;
                break;
            }
        }

        if (!f2)
            cout << -1 << endl;
    }

    return 0;
}