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

        set<ll> st;
        vector<pair<ll, ll>> vt;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            st.insert(x);
            vt.pb({i, x});
        }

        if (st.size() < 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

            vector<pair<ll, pair<ll, ll>>> vt2;
            for (ll i = 0; i < n; i++)
            {
                vt2.pb({0, vt[i]});
            }

            ll cnt = 0, f = 1, ct2 = 0;
            for (ll i = 0; i < n; i++)
            {
                if (cnt == n - 1)
                    break;
                for (ll j = i + 1; j < n; j++)
                {
                    if (cnt == n - 1)
                        break;
                    if (vt2[i].second.second != vt2[j].second.second && f == 0)
                    {
                        cout << i + 1 << " " << j + 1 << endl;
                        cnt++;
                    }

                    if (vt2[i].second.second != vt2[j].second.second && f == 1 && (vt2[i].first == 0 || vt2[j].first == 0))
                    {
                        cout << i + 1 << " " << j + 1 << endl;
                        cnt++;
                        if (vt2[i].first == 0)
                        {
                            vt2[i].first = 1;
                            ct2++;
                        }

                        if (vt2[j].first == 0)
                        {
                            vt2[j].first = 1;
                            ct2++;
                        }
                    }

                    if (ct2 == n)
                        f = 0;
                }
            }
        }
    }

    return 0;
}