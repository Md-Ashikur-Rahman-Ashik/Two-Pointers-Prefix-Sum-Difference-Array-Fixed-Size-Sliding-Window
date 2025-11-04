#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vectorSize;
    cin >> vectorSize;
    vector<int> integerVector(vectorSize);

    map<int, int> integerMap;

    priority_queue<int> integerQueue;

    int count = 0;

    for (int i = 0; i < vectorSize; i++)
    {
        int integerValue;
        cin >> integerValue;
        integerVector[i] = integerValue;

        if (integerMap[integerValue] == 0)
        {
            count++;
            integerMap[integerValue]++;
        }
        else
        {
            integerQueue.push(count);
            integerMap[integerValue]++;
            count = 1;
        }
    }

    cout << integerQueue.top();

    return 0;
}