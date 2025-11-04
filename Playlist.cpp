#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mapSize;
    cin >> mapSize;
    map<int, int> indexMap;

    int answer = 0;

    for (int i = 1, j = 1; i <= mapSize; i++)
    {
        int integerValue;
        cin >> integerValue;

        j = max(j, indexMap[integerValue] + 1);
        indexMap[integerValue] = i;
        answer = max(answer, i - j + 1);
    }

    cout << answer << '\n';

    return 0;
}