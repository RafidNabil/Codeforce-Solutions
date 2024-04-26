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

        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        int flag = 0;

        for (int i = 1; i <= n; i++)
        {
            if (i % k != a[i] % k)
                flag++;
        }

        if (flag == 0)
            cout << 0 << endl;
        else if (flag == 2)
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}