#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
        ll b, d, s, tm = 0;
        cin >> b >> d >> s;

        if(b==d && b == s)
        {
            tm = 3*s;
        }
        else if(s>b && d>b && s == d)
        {
             tm = 3*s-1;
        }
        else if(s>d && b>d && s == b)
        {
            tm = 3*s-1;
        }
        else if(b>s && d>s && b == d)
        {
            tm = 3*b-1;
        }
        else if ((s >= d && s >= b))
        {
            tm = 3*s-2;
        }
        else if (b >= s && b >= d)
        {
            tm = 3*b-2;
        }
        else if (d >= s && d >= b)
        {
            tm = 3*d-2;
        }

        cout << tm - (b+d+s) << endl;
    

    return 0;
}