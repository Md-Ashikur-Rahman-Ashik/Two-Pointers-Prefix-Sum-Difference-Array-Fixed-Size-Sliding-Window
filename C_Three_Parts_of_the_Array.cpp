#pragma GCC optimize("O3")
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <queue>
#include <iostream>
#include <iterator>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <ctime>
#include <cstring>
#include <stack>
#include <ctime>
#include <iomanip>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
// #include <ext/pb_ds/assoc_container.hpp>
#define en "\n"
#define int long long
#define double long double
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int arr[200100];
map<int, int> MAP;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = n; i > 0; --i)
    {
        sum += arr[i];
        if (!MAP[sum])
        {
            MAP[sum] = i;
        }
    }
    sum = 0;
    int ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += arr[i];
        if (MAP[sum] > i)
            ans = max(ans, sum);
    }
    cout << ans << en;
    return 0;
}