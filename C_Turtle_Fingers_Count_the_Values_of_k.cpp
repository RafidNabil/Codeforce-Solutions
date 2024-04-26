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
        ll a, b, l;
        cin >> a >> b >> l;

        set<ll> ans;

        for (ll i = 0; i < 20; i++)
        {
            if (pow(a, i) > l)
                break;
            for (ll j = 0; j < 20; j++)
            {
                if (pow(b, j) > l)
                    break;

                if (l % (ll)(pow(a, i) * pow(b, j)) == 0)
                    ans.insert(l / (pow(a, i) * pow(b, j)));
            }
        }

        cout << ans.size() << endl;
    }

    return 0;
}