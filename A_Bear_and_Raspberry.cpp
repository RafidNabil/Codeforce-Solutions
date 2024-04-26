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
    // cin >> t;

    while (t--)
    {
        int n, c;
        cin >> n >> c;

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = -1;

        for (int i = 0; i < n - 1; i++)
        {
            int x = a[i] - a[i + 1] - c;

            ans = max(ans, x);
        }

        if (ans < 0)
            cout << 0 << endl;
        else
            cout << ans << endl;
    }

    return 0;
}