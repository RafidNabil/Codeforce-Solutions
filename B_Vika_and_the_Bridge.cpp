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

        int a[n] = {0};

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int b[k] = {0};

        for (int i = 0; i < k; i++)
        {
            int cnt = 0;

            for (int j = 0; j < n; j++)
            {
                if (a[j] != i + 1)
                    cnt++;
                else
                {
                    b[i] = max(b[i], cnt);
                    cnt = 0;
                }
            }

            b[i] = max(b[i], cnt);
        }

        for (auto it : b)
            cout << it << " ";
        cout << endl;

        int mx = INT_MAX;

        for (int i = 0; i < k; i++)
            mx = min(mx, b[i]);

        if (mx == 1)
        {
            cout << 0 << endl;
            continue;
        }
        else if(mx == 2)
        {
            cout << 1 << endl;
            continue;
        }

        cout << mx / 2 + (mx % 2 ? 1 : 0) << endl;
    }

    return 0;
}