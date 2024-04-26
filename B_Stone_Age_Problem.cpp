#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie((ll)NULL);
    cout.tie((ll)NULL);
    ll tt;
    tt = 1;
    // cin >> tt;

    while (tt--)
    {
        ll n, q, sum = 0, t, a, b, c;
        cin >> n >> q;

        ll arr[n];
        ll q1[n] = {0}, q1v[n] = {0}, q2 = (ll)NULL, q2v = (ll)NULL;

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            q1[i] = (ll)NULL;
            q1v[i] = arr[i];
        }

        for (ll i = 1; i <= q; i++)
        {
            cin >> t;

            if (t == 1)
            {
                cin >> a >> b;
                if (q2 > q1[a - 1] && q2 != (ll)NULL)
                {
                    sum -= q2v;
                    sum += b;
                }
                else
                {
                    sum -= q1v[a - 1];
                    sum += b;
                }
                q1[a - 1] = i;
                q1v[a - 1] = b;
            }
            else
            {
                cin >> c;

                sum = n * c;
                q2 = i;
                q2v = c;
            }

            cout << sum << endl;
        }
    }

    return 0;
}