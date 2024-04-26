#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;
#define PI 3.14159265

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
        double d, h;
        cin >> n >> d >> h;

        int a[n];

        double sum = 0;

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] + h <= a[i + 1])
            {
                sum += (0.5 * d * h);
            }
            else
            {
                double hh = a[i] + h - a[i + 1];

                double ang = atan(h / (d / 2)) * (180 / PI);

                double dd = hh / tan(ang * (PI / 180));

                dd *= 2;

                double na = 0.5 * dd * hh;
                na = (0.5 * d * h) - na;
                sum += na;
            }
        }

        cout<<setprecision(10) << sum + ((0.5 * d * h)) << endl;
    }

    return 0;
}