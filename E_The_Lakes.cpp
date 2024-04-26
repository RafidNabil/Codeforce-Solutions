#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

ll N, M;
ll a[1000][1000];
ll visited[1000][1000];
ll c = 0;

bool isValid(ll x, ll y)
{
    if ((x < 0 || x >= N || y < 0 || y >= M) || visited[x][y] == 1 || a[x][y] == 0)
        return false;
    else
        return true;
}

void dfs(ll x, ll y)
{
    c += a[x][y];
    // cout << x << " " << y << endl;
    visited[x][y] = 1;

    if (isValid(x + 1, y))
        dfs(x + 1, y);

    if (isValid(x, y + 1))
        dfs(x, y + 1);

    if (isValid(x - 1, y))
        dfs(x - 1, y);

    if (isValid(x, y - 1))
        dfs(x, y - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    t = 1;
    cin >> t;

    while (t--)
    {
        cin >> N >> M;
        ll flag = 0;

        for (ll i = 0; i < N; i++)
        {
            for (ll j = 0; j < M; j++)
            {
                cin >> a[i][j];
                visited[i][j] = 0;
                if (a[i][j] != 0)
                    flag = 1;
            }
        }

        if (flag == 0)
        {
            cout << 0 << endl;
            continue;
        }

        vector<ll> st;

        for (ll i = 0; i < N; i++)
        {
            for (ll j = 0; j < M; j++)
            {
                if (a[i][j] != 0 && visited[i][j] == 0)
                {
                    c = 0;
                    dfs(i, j);
                    st.push_back(c);
                }
            }
        }

        sort(st.begin(), st.end());

        cout << st.back() << endl;

        c = 0;
    }

    return 0;
}