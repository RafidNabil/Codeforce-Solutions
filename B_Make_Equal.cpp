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
        ll n, sum = 0;
        cin >> n;

        ll a[n];

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        ll exs = 0, flag = 0;

        for (ll i = 0; i < n; i++)
        {
            if (a[i] >= (sum / n))
            {
                exs += a[i] - (sum / n);
            }
            else
            {
                if (exs >= (sum / n) - a[i])
                {
                    exs -= (sum / n) - a[i];
                }
                else
                {
                    flag = 1;
                }
            }

            if (flag)
            {
                break;
            }
        }

        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}