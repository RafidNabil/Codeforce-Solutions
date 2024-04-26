#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;
const ll M = 1e9 + 7;
// const ll M = 1e18+7;

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

        vector<ll> a;
        set<ll> st;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            st.insert(x);
        }

        for (auto i = st.begin(); i != st.end(); i++)
            a.pb(*i);

        sort(a.begin(), a.end());

        ll sum = 0, e = 0, s = 0;
        ll k = (n * (n + 1)) / 2, mx = -1;

        for (ll e = 0; e < a.size(); e++)
        {

            while (a[e] - a[s] > n - 1)
            {
                sum -= a[s];
                s++;
            }

            mx = max(mx, e - s + 1);
        }

        cout << mx << endl;
    }

    return 0;
}