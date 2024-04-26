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

        int a[n];
        int b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = i + 1;
        }

        int q;
        cin >> q;

        queue<int> qq;

        for (int i = 0; i < q; i++)
        {
            int x;
            cin >> x;
            qq.push(x);
        }

        for (int i = 0; i < q; i++)
        {
            int x = qq.front();
            qq.pop();

            for (int j = 0; j < n; j++)
            {
                if (b[i] == x)
                {
                    cout << a[i] << endl;
                    b[i] = -1;
                }

                if (b[i] > x)
                    b[i]--;
            }
        }
    }

    return 0;
}