#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int mapSize, desiredSum;
    cin >> mapSize >> desiredSum;

    map<long long int, long long int> integerMap;
    integerMap[0] = 1;
    long long int answer = 0;
    long long int sum = 0;

    for (int i = 0; i < mapSize; i++)
    {
        int integerValue;
        cin >> integerValue;

        sum = sum + integerValue;
        answer = answer + integerMap[sum - desiredSum];
        integerMap[sum]++;
    }

    cout << answer;

    return 0;
}