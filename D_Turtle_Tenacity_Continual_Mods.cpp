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

        ll a[n];

        set<ll> st;
        map<ll, ll> f;

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            f[a[i]]++;
            st.insert(a[i]);
        }

        if (f.begin()->second == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        if (st.size() == 1 || (f.begin()->first == 1 && f.begin()->second > 1))
        {
            cout << "NO" << endl;
            continue;
        }

        ll x = f.begin()->first;

        bool flag = 0;

        for (auto it = st.begin(); it != st.end(); it++)
        {
            if (*it % x != 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}