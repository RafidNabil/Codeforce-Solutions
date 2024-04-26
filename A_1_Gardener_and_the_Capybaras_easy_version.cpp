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
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int f = 0;
        for (int i = 1; i < s.length() - 1; i++)
        {
            if (s[i] == 'a')
                f = i;
        }

        if (f)
        {
            for (int i = 0; i < s.length(); i++)
            {
                if (i == f)
                    cout << " " << s[i] << " ";
                else
                    cout << s[i];
            }
        }
        else
        {
            for (int i = 0; i < s.length(); i++)
            {
                if (i == 0)
                    cout << s[i] << " ";
                else if (i == s.length() - 1)
                    cout << " " << s[i];
                else
                    cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}