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
        string s, a;
        cin >> s;

        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] == '?')
            {
                if(i == 0 || s[i-1] == '0' && s[i+1] == '?'||s[i-1] == '0' && s[i+1] == '0')
                s[i] = '0';
                else
                s[i] = '1';
            }
        }

        cout << s << endl;
    }

    return 0;
}