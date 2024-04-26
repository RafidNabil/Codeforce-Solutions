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

    int i = 0;

    while (t--)
    {
        i++;
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int c = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                a[i]++;
                c++;
            }
        }

        while (1)
        {
            int flag = 0;
            for (int i = 1; i < n ; i++)
            {
                if (a[i] % a[i-1] == 0)
                {
                    a[i]++;

                    c++;
                    flag = 1;
                }
            }

            if (flag == 0)
                break;
        }

        for (int i : a)
            cout << i << " ";

        cout<< endl;
    }

    return 0;
}
