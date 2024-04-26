#include <iostream>
#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, k, r, c;

        cin>>n>>k>>r>>c;
        int ip = (((c%k == 0 ? k : c%k) + (r-1))%k == 0 ? k : ((c%k == 0 ? k : c%k) + (r-1))%k);
        for(int i=1; i<=n; i++)
        {
            if(i != 1)
           ip--;
           if(ip < 1)
           ip = k;
           int test = ip;
            for(int j=1; j<=n; j++)
            {
                if(j == test)
                {
                    cout<<"X";
                    test+=k;
                }
                else{
                    cout<<".";
                }
            }
            cout<<endl;
        }
    }
 
    return 0;
}