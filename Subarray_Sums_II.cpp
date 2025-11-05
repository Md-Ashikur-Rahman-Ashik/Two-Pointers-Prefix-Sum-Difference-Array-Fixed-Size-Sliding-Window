#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int mapSize, desiredSum;
    cin >> mapSize >> desiredSum;

    map<long long int, long long int> frequencyMap;
    frequencyMap[0] = 1;
    long long int sum = 0;
    long long int answer = 0;

    for (int i = 1; i <= mapSize; i++)
    {
        int integerValue;
        cin >> integerValue;

        sum = sum + integerValue;
        answer = answer + frequencyMap[sum - desiredSum];
        frequencyMap[sum]++;
    }

    cout << answer;

    return 0;
}