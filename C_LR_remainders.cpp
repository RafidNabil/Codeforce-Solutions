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

        ll a[n];

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        string s;
        cin >> s;

        ll le = -1, re = n;
        vector<ll> ans;

        ll mult = 1;

        stack<ll> st;

        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                le++;
                st.push(a[le]);
            }
            else
            {
                re--;
                st.push(a[re]);
            }
        }

        while (!st.empty())
        {
            ll x = st.top();
            st.pop();
            mult = (mult * (x % m)) % m;
            ans.pb(mult);
        }

        for (ll i = n - 1; i >= 0; i--)
            cout << ans[i] << " ";

        cout << endl;
    }

    return 0;
}