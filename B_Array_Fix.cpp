#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;
const int M = 1e9 + 7;
// const ll M = 1e18+7;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt;
    tt = 1;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int f = 1, pre = a[n - 1];

        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] > pre)
            {
                if ((a[i] / 10) == 0)
                {
                    f = 0;
                    break;
                }

                if (pre / 10)
                {
                    if (a[i] / 10 > a[i] % 10)
                    {
                        f = 0;
                        break;
                    }
                    pre = a[i] / 10;
                }
                else
                {
                    if (a[i] % 10 > pre || (a[i] / 10 > a[i] % 10))
                    {
                        f = 0;
                        break;
                    }
                    pre = a[i] / 10;
                }
            }
            else
                pre = a[i];
        }

        cout << (f ? "YES" : "NO") << endl;
    }

    return 0;
}