#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;
const int M = 1e9 + 7;
// const ll M = 1e18+7;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt;
    tt = 1;
    // cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;

        int a[3];

        for (int i = 0; i < 3; i++)
            cin >> a[i];

        sort(a, a + 3);

        int sum = -1;

        for (int i = n / a[0]; i >= 0; i--)
        {
            int x = n - i * a[0];
            int f3 = 0;

            for (int j = x / a[1]; j >= 0; j--)
            {

                int y = n - i * a[0] - j * a[1];
                int f2 = 0;

                for (int k = y / a[2]; k >= 0; k--)
                {
                    int f1 = 0;
                    if (n == i * a[0] + j * a[1] + k * a[2])
                    {
                        sum = max(i + j + k, sum);
                        f1 = 1;
                        break;
                    }

                    if (f1)
                    {
                        f2 = 1;
                        break;
                    }
                }

                if (f2)
                {
                    f3 = 1;
                    break;
                }
            }

            if (f3)
                break;
        }

        cout << sum << endl;
    }

    return 0;
}