#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

ll sumOfDigitsFrom1ToNUtil(ll n, ll a[])
{
    if (n < 10)
        return (n * (n + 1) / 2);

    ll d = (ll)(log10(n));
    ll p = (ll)(ceil(pow(10, d)));
    ll msd = n / p;

    return (msd * a[d] + (msd * (msd - 1) / 2) * p +
            msd * (1 + n % p) +
            sumOfDigitsFrom1ToNUtil(n % p, a));
}

ll sumOfDigitsFrom1ToN(ll n)
{
    ll d = (ll)(log10(n));
    ll a[d + 1];
    a[0] = 0;
    a[1] = 45;

    for (ll i = 2; i <= d; i++)
        a[i] = a[i - 1] * 10 + 45 *
                                   (ll)(ceil(pow(10, i - 1)));

    return sumOfDigitsFrom1ToNUtil(n, a);
}

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

        cout << sumOfDigitsFrom1ToN(n) << endl;
        
    }

    return 0;
}