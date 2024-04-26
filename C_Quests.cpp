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
        int n, k;
        cin >> n >> k;

        int a[n], b[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        for (int i = 1; i < n; i++)
            a[i] += a[i - 1];

        int res = -1, bv = -1;

        for (int i = 1; i <= min(k, n); i++)
        {
            bv = max(bv, b[i - 1]);
            res = max(res, a[i - 1] + bv * (k - i));
        }

        cout << res << endl;
    }

    return 0;
}