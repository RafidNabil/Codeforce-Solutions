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
    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        int n, ans = -1;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int uk = 0, v = 0, k = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                uk++;
            else if (a[i] == 2)
            {
                k += uk;
                uk = 0;
            }

            int x = 0, y = 0;

            if (k % 2 == 0)
            {
                if (k == 2)
                {
                    x = 1;
                    y = 1;
                }
                else
                {
                    x = (k / 2) + 1;
                    y = (k / 2) - 1;
                }
            }
            else
            {
                x = k / 2;
                y = x + 1;
            }

            v = x / 2 + x % 2 + y / 2 + y % 2;
            v += uk;
            ans = max(v, ans);
        }

        cout << ans << endl;
    }

    return 0;
}