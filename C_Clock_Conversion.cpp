#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;
const int M = 1e9 + 7;
// const ll M = 1e18+7;

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
        string s;
        cin >> s;

        int f = ((s[0] - '0') * 10) + s[1] - '0';
        int sn = (((s[3] - '0') * 10)) + s[4] - '0';

        if (f == 0)
        {
            cout << 12 << ":" << setw(2) << setfill('0') << sn << " " << "AM" << endl;
        }
        else if (f < 12)
        {
            cout << setw(2) << setfill('0') << f << ":" << setw(2) << setfill('0') << sn << " " << "AM" << endl;
        }
        else if (f > 12)
        {
            cout << setw(2) << setfill('0') << f - 12 << ":" << setw(2) << setfill('0') << sn << " " << "PM" << endl;
        }
        else if (f == 12)
        {
            //if (sn == 0)
                //cout << setw(2) << setfill('0') << f << ":" << setw(2) << setfill('0') << sn << " " << "AM" << endl;
            //else if(sn != 0)
                cout << setw(2) << setfill('0') << f << ":" << setw(2) << setfill('0') << sn << " " << "PM" << endl;
        }
    }

    return 0;
}