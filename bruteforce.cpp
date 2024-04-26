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
        string a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << "YES" << endl;
            cout << a << endl;
            continue;
        }

        if (a.size() == 1 && b.size() == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        if (a[0] == b[0])
        {
            cout << "YES" << endl;
            cout <<a[0] << "*" << endl;
            continue;
        }
        else if (a[a.size() - 1] == b[b.size() - 1])
        {
            cout << "YES" << endl;
            cout << "*" << a[a.size() - 1] << endl;
            continue;
        }

        bool found = false;

        for (int i = 0; i < a.size() - 1; i++)
        {
            string s = a.substr(i, 2);
            for (int j = 0; j < b.size() - 1; j++)
            {
                string x = b.substr(j, 2);
                if (s == x)
                {
                    cout << "YES" << endl;
                    cout << "*" << s << "*" << endl;
                    found = true;
                    break;
                }
            }
            if (found == true)
                break;
        }

        if (found != true)
            cout << "NO" << endl;
    }

    return 0;
}