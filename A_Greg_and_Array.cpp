#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int vectorSize, operations, queries;
    cin >> vectorSize >> operations >> queries;

    vector<long long int> integerVector(vectorSize + 2), changeVector(vectorSize + 2, 0), queryVector(operations + 2, 0);

    vector<pair<pair<long long int, long long int>, long long int>> pairVector(operations + 2);

    for (int i = 1; i <= vectorSize; i++)
    {
        cin >> integerVector[i];
    }

    for (int i = 1; i <= operations; i++)
    {
        cin >> pairVector[i].first.first >> pairVector[i].first.second >> pairVector[i].second;
    }

    while (queries--)
    {
        int leftIndex, rightIndex;
        cin >> leftIndex >> rightIndex;

        queryVector[leftIndex]++;
        queryVector[rightIndex + 1]--;
    }

    long long int count = 0;
    for (int i = 1; i <= operations; i++)
    {
        count = count + queryVector[i];
        changeVector[pairVector[i].first.first] = changeVector[pairVector[i].first.first] + (pairVector[i].second * count);
        changeVector[pairVector[i].first.second + 1] = changeVector[pairVector[i].first.second] - (pairVector[i].second * count);
    }

    count = 0;
    for (int i = 1; i <= vectorSize; i++)
    {
        count = count + changeVector[i];
        integerVector[i] = integerVector[i] + count;
        cout << integerVector[i] << " ";
    }

    return 0;
}