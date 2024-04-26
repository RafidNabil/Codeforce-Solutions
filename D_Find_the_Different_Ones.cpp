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

        vactor<int, pair<int, int>> vt;

        int mx = a[0], mn = a[0];

        for (int i = 1; i<n; i++)
        {
            
        }

            int q;
        cin >> q;

        for (int i = 0; i < q; i++)
        {
            int l, r, f = 1;
            cin >> l >> r;
            l--;
            r--;

            for (int j = l + 1; j <= r; j++)
            {
                if (a[l] != a[j])
                {

                    cout << l + 1 << " " << j + 1 << endl;
                    f = 0;
                    break;
                }
            }

            if (f)
                cout << -1 << " " << -1 << endl;
        }

        cout << endl;
    }

    return 0;
}