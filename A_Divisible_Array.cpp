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

        if (n % 2 == 0)
        {
            int x = 2;
            for (int i = 0; i < n; i++)
            {
                cout << x << " ";
                x += 2;
            }
        }
        else
        {
            for (int i = 1; i <= n; i++)
                cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}