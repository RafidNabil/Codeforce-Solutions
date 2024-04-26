#include <iostream>
#include <bits/stdc++.h>
#include <time.h>
#define D 100

using namespace std;

int main()
{
    srand(time(NULL));
    int t;
    t = 1;
    cout << t << endl;

    int n = rand() % (D - 1 + 1) + 1;
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        int m = rand() % (D - 1 + 1) + 1;
        set<int> used;
        for (int j = 0; j < m;)
        {
            int x = rand() % (D - 1 + 1) + 1;
            if (!used.count(x))
            {
                cout << x << " ";
                used.insert(x);
            }
        }
        cout << endl;
    }

    return 0;
}