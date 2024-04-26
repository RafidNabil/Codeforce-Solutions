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

        char a[3][3];

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
                cin >> a[i][j];
        }

        if ((a[0][0] == a[0][1] && a[0][1] == a[0][2]) && a[0][0] != '.')
            cout << a[0][0] << endl;
        else if ((a[1][0] == a[1][1] && a[1][1] == a[1][2]) && a[1][0] != '.')
            cout << a[1][0] << endl;
        else if ((a[2][0] == a[2][1] && a[2][1] == a[2][2]) && a[2][0] != '.')
            cout << a[2][0] << endl;
        else if ((a[0][0] == a[1][0] && a[1][0] == a[2][0]) && a[0][0] != '.')
            cout << a[0][0] << endl;
        else if ((a[0][1] == a[1][1] && a[1][1] == a[2][1]) && a[0][1] != '.')
            cout << a[0][1] << endl;
        else if ((a[0][2] == a[1][2] && a[1][2] == a[2][2]) && a[0][2] != '.')
            cout << a[0][2] << endl;
        else if ((a[0][0] == a[1][1] && a[1][1] == a[2][2]) && a[0][0] != '.')
            cout << a[0][0] << endl;
        else if ((a[0][2] == a[1][1] && a[1][1] == a[2][0]) && a[2][0] != '.')
            cout << a[2][0] << endl;
        else
            cout << "DRAW" << endl;
    }

    return 0;
}