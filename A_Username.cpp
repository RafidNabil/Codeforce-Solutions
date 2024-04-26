#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    tt = 1;
    cin >> tt;

    while (tt--)
    {
        string s;
        cin >> s;

        int last = -1;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 97 && s[i] <= 122)
                last = i;
        }

        int cnt = 0;
        for (int i = last + 1; i < s.length(); i++)
        {
            if (s[i] == '0')
                cnt++;
            else
                break;
        }

        cout << s.substr(0, last + 1 + cnt) << endl;
    }

    return 0;
}