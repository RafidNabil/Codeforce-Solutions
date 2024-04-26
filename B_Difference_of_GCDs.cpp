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
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> a;
        int flag = 0;

        for (int i = 1; i <= n; i++)
        {
            int x;
            if (l % i == 0)
            {
                x = l / i;
            }
            else
            {
                x = l / i;
                x++;
            }

            if (x * i >= l && x * i <= r)
                a.pb(i * x);
            else
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for (auto i : a)
                cout << i << " ";
            cout << endl;
        }
    }

    return 0;
}