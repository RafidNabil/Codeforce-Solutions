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
        ll n;
        cin >> n;
        priority_queue<ll> pq;
        ll ans = 0;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x != 0)
                pq.push(x);
            else
            {
                if (!pq.empty())
                {
                    ans += pq.top();
                    pq.pop();
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}