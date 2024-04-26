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

        int a[n], li[n + 1], ans[n + 1] = {0};

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            li[i] = -1;
        }
        li[n] = -1;

        for (int i = 0; i < n; i++)
        {
            if (li[a[i]] == -1)
                li[a[i]] = i;
            else if (li[a[i]] % 2 != i % 2)
            {
                ans[a[i]]++;
                li[a[i]] = i;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (ans[i] != 0)
                cout << ans[i] + 1 << " ";
            else
                cout << ans[i] << " ";
        }

        cout << endl;
    }

    return 0;
}