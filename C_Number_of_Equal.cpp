#include <bits/stdc++.h>
using namespace std;

int main()
{
    int firstVectorSize, secondVectorSize;
    cin >> firstVectorSize >> secondVectorSize;

    vector<int> firstVector(firstVectorSize);
    vector<int> secondVector(secondVectorSize);
    map<long long int, long long int> integerMap;

    for (int i = 0; i < firstVectorSize; i++)
    {
        cin >> firstVector[i];
        int integerValue = firstVector[i];
        integerMap[integerValue]++;
    }

    for (int i = 0; i < secondVectorSize; i++)
    {
        cin >> secondVector[i];
    }

    long long int count = 0;

    for (int i = 0; i < secondVectorSize; i++)
    {
        int currentValue = secondVector[i];
        int currentCount = integerMap[currentValue];
        count = count + currentCount;
    }

    cout << count;

    return 0;
}