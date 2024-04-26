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
        int n, k;
        cin >> n >> k;

        int sl[26] = {0};
        int cl[26] = {0};

        for (int i = 0; i < n; i++)
        {
            char x;
            cin >> x;

            if (x >= 'A' && x <= 'Z')
                cl[x - 65]++;
            else
                sl[x - 97]++;
        }

        int sum = 0;
        for (int i = 0; i < 26; i++)
        {
            if (cl[i] > sl[i] && cl[i] != 0 && sl[i] != 0)
            {
                sum += sl[i];
                cl[i] = cl[i] - sl[i];
                sl[i] = 0;
            }
            else if (sl[i] > cl[i] && cl[i] != 0 && sl[i] != 0)
            {
                sum += cl[i];
                sl[i] = sl[i] - cl[i];
                cl[i] = 0;
            }
            else if (cl[i] == sl[i] && cl[i] != 0 && sl[i] != 0)
            {
                sum += sl[i];
                sl[i] = 0;
                cl[i] = 0;
            }
        }

        int p = 0;
        for (int i = 0; i < 26; i++)
        {
            p += sl[i] / 2;
            p += cl[i] / 2;
        }

        if (p >= k)
            cout << sum + k << endl;
        else
            cout << sum + p << endl;
    }

    return 0;
}