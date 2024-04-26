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
        ll n, k;
        cin >> n >> k;

        deque<ll> a(n);

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll cnt = 0;

        while (k > 0 && !a.empty())
        {

            if (a.size() == 1)
            {
                if (k >= a.front())
                    cnt++;

                break;
            }
            if (a.front() <= a.back())
            {
                if (k >= (a.front() * 2) - 1)
                {
                    k -= (a.front() * 2) - 1;
                    a.back() -= a.front() - 1;
                    a.front() = 0;
                }
                else
                    break;

                if (a.front() == 0)
                {
                    a.pop_front();
                    cnt++;
                }

                if (a.back() > 0 && k > 0)
                {
                    a.back()--;
                    k--;
                }
                else if (a.back() > 0 && k == 0)
                    break;

                if (a.back() == 0)
                {
                    a.pop_back();
                    cnt++;
                }
            }
            else
            {

                if (k >= a.back() * 2)
                {

                    k -= a.back() * 2;

                    a.front() -= a.back();
                    a.back() = 0;
                }
                else
                    break;

                if (a.front() == 0)
                {
                    a.pop_front();
                    cnt++;
                }

                if (a.back() == 0)
                {
                    a.pop_back();
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}