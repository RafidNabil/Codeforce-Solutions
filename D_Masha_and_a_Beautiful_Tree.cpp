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

        int n;
        cin >> n;

        vector<int> a;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.pb(x);
        }

        int c = 0, flag = 0;

        for (int i = 2; i <= n; i *= 2)
        {
            int flag2 = 0;
            for (int j = 0; j + i - 1 < n; j += i)
            {
                int low = j, hi = j + i - 1;
                int in = j, mid = (hi + low) / 2;
                if (a[in] > a[mid + 1])
                {
                    c++;
                    sort(a.begin() + low, a.begin() + hi + 1);
                }

                if (a[mid + 1] - a[mid] != 1)
                {
                    flag2 = 1;
                    break;
                }
            }

            if (flag2 == 1)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            cout << -1 << endl;
        else
            cout << c << endl;
    }

    return 0;
}