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
        string s;
        cin >> s;

        int one = 0, zero = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
                zero++;
            else
                one++;
        }

        if (one == zero)
        {
            cout << 0 << endl;
            continue;;
        }

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1' && zero != 0)
                zero--;
            else if (s[i] == '0' && one != 0)
                one--;
            else
                break;
        }

        cout << max(one, zero) << endl;
    }

    return 0;
}