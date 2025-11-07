#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, n, m;
        cin >> k >> n >> m;

        int a[n], b[m], c[n + m], gg = 0;

        for (int &x : a)
            cin >> x;
        for (int &x : b)
            cin >> x;

        merge(a, a + n, b, b + m, c);

        for (int x : c)
        {
            k = k + (!x);
            if (x > k)
            {
                gg = 1;
            }
        }

        if (gg)
            cout << -1;
        else
            for (int x : c)
                cout << x << ' ';
        cout << '\n';
    }
}