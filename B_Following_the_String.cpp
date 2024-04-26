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
        int al[26] = {0};

        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans[n] = {0};

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                if (al[j] == a[i])
                {
                    ans[i] = j;
                    al[j]++;
                    break;
                }
            }
        }

        // for (int i = 0; i < n; i++)
        //     cout << ans[i] << " ";

        for (int i = 0; i < n; i++)
        {
            char x = ans[i] + 97;
            cout << x;
        }
        cout << endl;
    }

    return 0;
}