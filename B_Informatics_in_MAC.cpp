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

        ll a[n], aa[n];

        ll mn = 0;

        for (ll i = 0; i < n; i++)
        {

            cin >> a[i];
            aa[i] = a[i];
        }

        sort(aa, aa + n);

        for (int i = 0; i < n; i++)
            mn = (mn == aa[i] ? mn + 1 : mn);

        ll l = 0, r;
        set<ll> st;
        vector<pair<ll, ll>> ans;

        for (ll i = 0; i < n; i++)
        {
            if (a[i] < mn)
                st.insert(a[i]);

            if (st.size() == mn)
            {
                ans.pb({l, i});
                r = i;
                l = i + 1;
                st.clear();
            }
        }

        pair<ll, ll> tmp = ans.back();
        ans.pop_back();
        ans.pb({tmp.first, n - 1});

        if (ans.size() > 1)
        {
            cout << ans.size() << endl;
            for (auto i : ans)
                cout << i.first + 1 << " " << i.second + 1 << endl;
        }
        else
            cout << -1 << endl;
    }

    return 0;
}