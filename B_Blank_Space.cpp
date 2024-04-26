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
        int n, c = 0;
        cin >> n;

        int mx = -1;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x == 0)
                c++;
            else
            {
                mx = max(mx, c);
                c = 0;
            }
        }

        mx = max(mx, c);

        cout << mx << endl;
    }

    return 0;
}