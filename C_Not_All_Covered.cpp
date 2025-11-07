#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> d(n + 2, 0);

    for (int i = 0; i < m; i++)
    {
        int L, R;
        cin >> L >> R;
        d[L] += 1;
        if (R + 1 <= n)
            d[R + 1] -= 1;
    }

    vector<int> pre(n + 1, 0);
    pre[1] = d[1];
    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + d[i];
    }

    bool hasZero = false;
    for (int i = 1; i <= n; i++)
    {
        if (pre[i] == 0)
        {
            hasZero = true;
            break;
        }
    }

    if (hasZero)
    {
        cout << 0 << "\n";
    }
    else
    {
        int ans = *min_element(pre.begin() + 1, pre.end());
        cout << ans << "\n";
    }

    return 0;
}
