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

        vector<pair<int, int>> seg;
        int c = 0;

        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;

            if (k >= x && k <= y)
            {
                seg.pb(mp(x, y));
                c++;
            }
        }

        if (c == 0)
        {
            cout << "NO" << endl;
            continue;
        }

        int a[51] = {0};

        for (int i = 1; i <= 50; i++)
        {
            int x, y;
            for (auto j : seg)
            {
                x = j.first;
                y = j.second;
                if (i >= x && i <= y)
                    a[i]++;
            }
        }

        int flag = 0;

        for (int i = 1; i <= 50; i++)
        {
            if (a[i] == c && i != k)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}