#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, q;
        cin >> n >> q;
        vector<long long int> arr(n);
        vector<long long int> pref(n);
        long long int sum = 0;
        for (long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            pref[i] = sum;
        }
        while (q--)
        {
            long long int a, b, c;
            cin >> a >> b >> c;
            long long int ans = 0;
            if (a == 1)
            {
                ans = pref[b - 1];
            }
            else
            {
                ans = (pref[b - 1] - pref[a - 2]);
            }
            long long int ans2 = pref[n - 1] - ans + (b - a + 1) * c;
            if (ans2 % 2 == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}