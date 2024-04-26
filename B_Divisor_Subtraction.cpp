#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{
    int t;
    t = 1;
    // cin >> t;

    while (t--)
    {
        ll n, i;
        cin >> n;
        bool flag = false;

        if (n % 2 == 0)
        {
            cout << n / 2 << endl;
        }
        else
        {
            for (i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    flag = true;
                    break;
                }
            }

            if(flag == false)
            i = n;

            n = n - i;
            cout << (n / 2) + 1 << endl;
        }
    }

    return 0;
}