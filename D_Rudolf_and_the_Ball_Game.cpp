#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

ll frd(ll p, ll v, ll n)
{
    return (((p + v) % n) == 0 ? n : ((p + v) % n));
}

ll bcw(ll p, ll v, ll n)
{
    ll ans;
    if (p - v >= 0)
        ans = p - v;
    else
        ans = n + (p - v);

    return (ans == 0 ? n : ans);
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
        ll n, m, x;
        cin >> n >> m >> x;

        vector<pair<ll, char>> pr;

        for (ll i = 0; i < m; i++)
        {
            ll u;
            char v;
            cin >> u >> v;

            pr.pb({u, v});
        }

        queue<set<ll>> qu;
        set<ll> tmp3;

        if (pr[0].second == '?')
        {
            tmp3.insert(frd(x, pr[0].first, n));
            tmp3.insert(bcw(x, pr[0].first, n));
        }
        else if (pr[0].second == '0')
            tmp3.insert(frd(x, pr[0].first, n));
        else
            tmp3.insert(bcw(x, pr[0].first, n));

        qu.push(tmp3);

        for (ll i = 1; i < m; i++)
        {
            set<ll> tmp = qu.front();
            qu.pop();
            set<ll> tmp2;

            if (pr[i].second == '?')
            {
                for (auto it : tmp)
                {
                    tmp2.insert(frd(it, pr[i].first, n));
                    tmp2.insert(bcw(it, pr[i].first, n));
                }
            }
            else if (pr[i].second == '0')
            {
                for (auto it : tmp)
                    tmp2.insert(frd(it, pr[i].first, n));
            }
            else
            {
                for (auto it : tmp)
                    tmp2.insert(bcw(it, pr[i].first, n));
            }

            qu.push(tmp2);
        }

        cout << qu.front().size() << endl;
        for (auto it : qu.front())
            cout << it << " ";
        cout << endl;
    }

    return 0;
}