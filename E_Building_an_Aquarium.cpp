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

        map<ll, ll> fr;
        set<ll> st;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            st.insert(x);

            fr[x]++;
        }

        if (st.size() == 1)
        {
            cout << (k / n) + fr.begin()->first << endl;
            continue;
        }

        ll w = 0, h = 0, cnt = 0, cl = 0;

        for (auto i = fr.begin(); cnt < st.size() - 1; i++)
        {
            auto j = i;
            j++;

            ll wr = (j->first - i->first) * i->second + (j->first - i->first) * cl;
            cl += i->second;

            if (k >= wr)
            {
                k -= (wr / cl) * cl;
                h += wr / cl;
            }
            else
            {
                h += k / cl;
                k -= h * cl;
                break;
            }

            cnt++;
        }

        if (k > 0)
            h += k / n;

        cout << h + fr.begin()->first << endl;
    }

    return 0;
}