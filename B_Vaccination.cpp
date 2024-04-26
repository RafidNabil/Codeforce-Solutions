#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int patient[1000100];
int canwait[1000100];

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
        int n, k, d, w, lp = -1;

        cin >> n >> k >> d >> w;

        for (int i = 0; i < n; i++)
        {
            patient[i] = 0;
            canwait[i] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            lp = max(lp, x);

            if (i == n - 1)
            {
                patient[x]++;
                continue;
            }

            patient[x]++;
            canwait[x] = 1;
        }

        bool open = false;
        int ot = -1, dl, pack = 0;

        for (int i = 0; i <=lp; i++)
        {
            if (patient[i] >0 && canwait[i] == 1)
            {
                int z = patient[i];
                patient[i] = 0;
                canwait[i] = 0;
                patient[i + w] = z;
                canwait[i + w] = 0;
            }
            else if (patient[i] >0 && canwait[i] == 0)
            {
                if (dl == 0)
                {
                    open = false;
                }
                if (open && (i <= ot + d))
                {
                    dl--;
                    patient[i]--;
                }
                else if (!open || i > ot + d || dl == 0)
                {
                    open = true;
                    pack++;
                    dl = k;
                    dl--;
                    ot = i;
                    patient[i]--;
                }
            }

            if(patient[i] != 0)
            i--;
        }

        cout << pack << endl;
    }

    return 0;
}