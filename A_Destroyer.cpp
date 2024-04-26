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

        int a[100] = {0};

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[x]++;
        }

        int f = 1;

        for (int i = 1; i < 100; i++)
        {
            if (a[i] > a[i - 1])
            {
                f = 0;
                break;
            }
        }

        if (f == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}