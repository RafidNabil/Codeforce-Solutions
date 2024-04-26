

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
        ll lz = 0, lo = 0, rz = 0, ro = 0;

        ll mid = (n / 2);

        for (ll i = 0; i < n; i++)
        {
            if (i < mid)
            {
                if (s[i] == '0')
                    lz++;
                else
                    lo++;
            }
            else
            {
                if (s[i] == '0')
                    rz++;
                else
                    ro++;
            }
        }

        ll rr = (rz + ro) % 2 == 0 ? (rz + ro) / 2 : (rz + ro) / 2 + 1;
        ll rl = (lz + lo) % 2 == 0 ? (lz + lo) / 2 : (lz + lo) / 2 + 1;

        if (rr <= ro && rl <= lz)
        {
            cout << mid << endl;
            continue;
        }

        ll tlz = lz, tlo = lo, trz = rz, tro = ro;

        ll mid1 = INT64_MAX, mid2 = INT64_MAX;
        for (ll i = mid; i < n; i++)
        {
            if (s[i] == '0')
            {
                tlz++;
                trz--;
            }
            else
            {
                tlo++;
                tro--;
            }

            rr = (trz + tro) % 2 == 0 ? (trz + tro) / 2 : (trz + tro) / 2 + 1;
            rl = (tlz + tlo) % 2 == 0 ? (tlz + tlo) / 2 : (tlz + tlo) / 2 + 1;

            if (rr <= tro && rl <= tlz)
            {
                mid1 = i + 1;
                break;
            }
        }

        tlz = lz, tlo = lo, trz = rz, tro = ro;

        for (ll i = mid - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                trz++;
                tlz--;
            }
            else
            {
                tro++;
                tlo--;
            }

            rr = (trz + tro) % 2 == 0 ? (trz + tro) / 2 : (trz + tro) / 2 + 1;
            rl = (tlz + tlo) % 2 == 0 ? (tlz + tlo) / 2 : (tlz + tlo) / 2 + 1;

            if (rr <= tro && rl <= tlz)
            {
                mid2 = i;
                break;
            }
        }

        if (abs(n - 2*mid1) < abs(n - 2*mid2))
            cout << mid1 << endl;
        else if (abs(n - 2*mid1) > abs(n - 2*mid2))
            cout << mid2 << endl;
        else
            cout << min(mid1, mid2) << endl;
    }

    return 0;
}