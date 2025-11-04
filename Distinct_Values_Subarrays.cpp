#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int mapSize;
    cin >> mapSize;
    map<int, int> indexMap;

    long long int answer = 0;

    for (int i = 1, j = 1; i <= mapSize; i++)
    {
        int integerValue;
        cin >> integerValue;

        j = max(j, indexMap[integerValue] + 1);
        indexMap[integerValue] = i;
        answer = answer + (i - j + 1);
    }

    cout << answer;

    return 0;
}