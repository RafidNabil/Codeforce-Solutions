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
        int n, c = 0, s;
        cin >> n;

        while (n > 0)
        {
            s = n % 10;
            n /= 10;
            c++;
        }

        cout << ((c - 1) * 9) + s << endl;
    }

    return 0;
}