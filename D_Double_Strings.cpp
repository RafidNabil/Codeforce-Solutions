#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
typedef long long ll;

using namespace std;

int main()
{

    map <int, int> mp;
    int n;

    cin >> n;

    for (int i = 2; i <= n;)
    {
        if (n % i == 0)
        {
            mp[i]++;
            //cout << i << " ";
            n = n / i;
        }
        else
            i++;
    }

    for(auto it = mp.begin(); it!= mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}