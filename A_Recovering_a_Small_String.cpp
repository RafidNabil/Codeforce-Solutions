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

        int a, b, c;

        int f1 = 0, f2 = 0;

        for (int i = 1; i <= 26; i++)
        {
            for (int j = 1; j <= 26; j++)
            {
                for (int k = 1; k <= 26; k++)
                {
                    if (i + j + k == n)
                    {

                        a = i;
                        b = j;
                        c = k;
                        f1 = 1;
                        break;
                    }
                }

                if (f1)
                {
                    f2 = 1;
                    break;
                }
            }
            if (f2)
                break;
        }

        char aa = a + 96, bb = b + 96, cc = c + 96;
        cout << aa << bb << cc << endl;
    }

    return 0;
}