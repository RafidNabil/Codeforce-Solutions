#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;

        cin >> n;

        string s[n];

        for (int i = 0; i < n; i++)
            cin >> s[i];

        int a[n][n];

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            a[i][j] = s[i][j] - 48;
        }

        int k = n - 1, sum = 0;
        int l = 0, m = n - 1, p = 0, q = n - 1, h = 0, r, w;

        for (int i = 0; i < n / 2; i++)
        {
            int h = 0, count = 0;
            for (int j = 0; j < k; j++)
            {
                int zc = 0, oc = 0;

                r = i, w = i+h;
                if (a[r][w] == 1)
                    oc++;
                else
                    zc++;

                r = i + h, w = m;
                if (a[r][w] == 1)
                    oc++;
                else
                    zc++;

                r =m - h, w = i;
                if (a[r][w] == 1)
                    oc++;
                else
                    zc++;

                r = m, w = m-h;
                if (a[r][w] == 1)
                    oc++;
                else
                    zc++;

            sum += min(zc, oc);
            h++;

            }

            k -= 2;
            //l++;
            m--;
        }

        cout<<sum<<endl;

    }

    return 0;
}