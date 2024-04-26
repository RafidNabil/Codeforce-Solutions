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
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int b[n + 1] = {0};

        b[a[0]] = 1;
        int cnt = 0;

        for (int i = 1; i < n; i++)
        {
            if (b[a[i] + 1] == 1 && a[i] != n)
                cnt++;

            b[a[i]] = 1;
        }

        cout << cnt << endl;
    }

    return 0;
}