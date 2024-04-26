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
        ll n;
        cin >> n;

        ll l = 0;

        for (ll i = 0; i < n; i++)
        {
            if (l % 2 == 0)
            {
                ll k = 0;
                for (ll j = 0; j < n; j++)
                {
                    if (k % 2 == 0)
                    {
                        cout << "##";
                    }
                    else
                    {
                        cout << "..";
                    }
                    k ^= 1;
                }

                cout << endl;
                k = 0;
                for (ll j = 0; j < n; j++)
                {
                    if (k % 2 == 0)
                    {
                        cout << "##";
                    }
                    else
                    {
                        cout << "..";
                    }
                    k ^= 1;
                }
            }
            else
            {
                ll k = 1;
                for (ll j = 0; j < n; j++)
                {
                    if (k % 2 == 0)
                    {
                        cout << "##";
                    }
                    else
                    {
                        cout << "..";
                    }
                    k ^= 1;
                }

                cout << endl;
                k = 1;
                for (ll j = 0; j < n; j++)
                {
                    if (k % 2 == 0)
                    {
                        cout << "##";
                    }
                    else
                    {
                        cout << "..";
                    }
                    k ^= 1;
                }
            }

            l ^= 1;
            cout << endl;
        }
    }

    return 0;
}