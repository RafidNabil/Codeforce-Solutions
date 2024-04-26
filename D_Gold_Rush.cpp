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
    ll t;
    t = 1;
    cin >> t;

    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        if (n == m)
        {
            cout << "YES" << endl;
            continue;
        }

        queue<ll> q;
        q.push(n);

        bool found = false;

        while (!q.empty())
        {
            ll x = q.front();

            if (x % 3 == 0)
            {
                if (x / 3 == m || 2 * x / 3 == m)
                {
                    found = true;
                    break;
                }
                else
                {
                    q.pop();
                    q.push(x / 3);
                    q.push(2 * x / 3);
                }
            }
            else
                q.pop();
        }

        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}