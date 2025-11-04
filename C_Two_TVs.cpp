#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int queries;
    cin >> queries;

    map<int, int> integerMap;

    while (queries--)
    {
        int leftIndex, rightIndex;
        cin >> leftIndex >> rightIndex;

        integerMap[leftIndex]++;
        integerMap[rightIndex + 1]--;
    }

    long long int sum = 0;
    bool flag = true;

    for (auto [key, value] : integerMap)
    {
        sum = sum + value;
        if (sum > 2)
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}