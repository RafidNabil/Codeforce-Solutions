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
        int n;
        cin >> n;

        int p[n - 1] = {0};

        string s;
        cin >> s;

        int  f = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 49 && f == 0)
                f = 1;
            else if (s[i] == 49 && f == 1)
            {
                f = 0;
                p[i - 1] = 1;
            }
        }

        int i=0;
        while(i<n-1){
            if (p[i] == 1)
                cout << "-";
            else
                cout << "+";

                i++;
        }
        cout << endl;
    }

    return 0;
}