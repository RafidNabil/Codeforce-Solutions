#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

bool fun(ll n, ll k, ll val)
{
    ll pv1 = n, pv2 = val, cv, i;

    bool can = false;

    for (i = 2; i < k; i++)
    {

        ll x = pv1 - pv2;

        if (i != k - 1 && i != k - 2)
        {
            if (x >= pv2 || x <= 0)
            {
                break;
            }
            else
                cv = x;
        }
        else
        {
            if (x > pv2)
            {
                break;
            }
            else
                cv = x;
        }

        swap(pv1, pv2);
        swap(pv2, cv);
    }

    if (i == k)
        can = true;
    else
        can = false;

    return can;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    t = 1;
    cin >> t;

    while (t--)
    {
        ll n, k, c = 0;

        cin >> n >> k;

        for (ll i = (n / 2 + (n % 2 ? 1 : 0)); i <= n; i++)
        {
            if (fun(n, k, i))
                c++;
        }

        cout << c << endl;
    }

    return 0;
}