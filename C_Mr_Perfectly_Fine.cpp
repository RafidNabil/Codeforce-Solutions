#include <iostream>
#include <bits/stdc++.h>
#include <limits>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string p;
    getline(cin, p);

    int t =stoi(p);

    while (t--)
    {
        string x;
        getline(cin, x);

        int n = stoi(x);

        int t[n], s1[n], s2[n];

        for (int i = 0; i < n; i++)
        {
            string s;
            getline(cin, s);

            s1[i] = s[s.length()-2] - '0';
            s2[i] = s[s.length()-1] - '0';
            s.pop_back();
            s.pop_back();
            s.pop_back();
            t[i] = stoi(s);
        }

        int f1 = 0, f2 = 0, f3 = 0, indx = -1;

        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 1)
            {
                f1 = 1;
            }

            if (s2[i] == 1)
            {
                f2 = 1;
            }

            if (s1[i] == 1 && s2[i] == 1)
            {
                indx = i;
                f3 = 1;
                break;
            }
        }

        int m = INT_MAX;

        if (f1 == 0 || f2 == 0)
        {
            cout << -1 << endl;
            continue;
        }
        else if (f3 == 1)
        {

            for (int i = 0; i < n; i++)
            {
                if (s1[i] == 1 && s2[i] == 1)
                {
                    m = min(m, t[i]);
                }
            }
        }

        int m1 = INT_MAX;
        int m2 = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 1)
                m1 = min(m1, t[i]);
            if (s2[i] == 1)
                m2 = min(m2, t[i]);
        }

        // cout << m1 + m2 << endl;
        cout << min(m, m1 + m2) << endl;
        ;
    }

    return 0;
}
