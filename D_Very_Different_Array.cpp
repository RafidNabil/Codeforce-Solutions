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
        ll n, m;
        cin >> n >> m;

        vector<ll> a(n);
        vector<ll> c(m);

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        for (ll i = 0; i < m; i++)
            cin >> c[i];

        sort(a.begin(), a.end());
        sort(c.begin(), c.end());

        ll i = 0, j = n - 1, p = 0, q = m - 1, diff = 0;

        while (i <= j)
        {
            ll ff = abs(a[i] - c[p]);
            ll fl = abs(a[i] - c[q]);
            ll lf = abs(a[j] - c[p]);
            ll ll = abs(a[j] - c[q]);

            if (max(ff, fl) > max(lf, ll))
            {
                if (ff > fl)
                {
                    diff += ff;
                    i++;
                    p++;
                }
                else
                {
                    diff += fl;
                    i++;
                    q--;
                }
            }
            else
            {
                if (lf > ll)
                {
                    diff += lf;
                    j--;
                    p++;
                }
                else
                {
                    diff += ll;
                    j--;
                    q--;
                }
            }
        }

        cout << diff << endl;
    }

    return 0;
}