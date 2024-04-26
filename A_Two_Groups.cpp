#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;

        cin >> n;

        ll sum1 = 0, sum2 = 0;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            if (x >= 0)
                sum1 += x;
            else
                sum2 += -1*x;
        }

        cout<<max(sum1, sum2) - min(sum1, sum2)<<endl;
    }

    return 0;
}