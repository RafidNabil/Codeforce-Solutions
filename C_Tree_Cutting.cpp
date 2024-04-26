#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;
const ll M = 1e9 + 7;
// const ll M = 1e18+7;

using namespace std;

vector<ll> G[100001];
ll cnt;

void dfs(ll s, vector<ll> &sz, vector<ll> &vs, ll x)
{
    vs[s] = 1;
    ll sze = 1;
    for (ll i : G[s])
    {
        if (vs[i] == 0)
        {
            dfs(i, sz, vs, x);
            sze += sz[i];
        }
    }

    if (sze >= x)
    {
        sz[s] = 0;
        cnt++;
    }
    else
        sz[s] = sze;
}

bool f(ll x, ll k, ll n)
{
    vector<ll> sz(n + 1, 0);
    vector<ll> vs(n + 1, 0);
    cnt = 0;
    dfs(1, sz, vs, x);

    return cnt > k;
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
        ll n, k;
        cin >> n >> k;

        for (ll i = 1; i <= n; i++)
            G[i].clear();

        for (ll i = 0; i < n - 1; i++)
        {
            ll u, v;
            cin >> u >> v;
            G[u].push_back(v);
            G[v].push_back(u);
        }

        ll l = 1, r = n;
        ll ans;

        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (f(mid, k, n))
            {
                l = mid + 1;
                ans = mid;
            }
            else
                r = mid - 1;
        }

        cout << ans << endl;
    }

    return 0;
}