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

        if (n % 2 == 0)
        {
            char c;
            cout << "YES" << endl;
            for (int i = 0; i < n / 2; i++)
            {
                c = i + 65;
                cout << c << c;
            }
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}