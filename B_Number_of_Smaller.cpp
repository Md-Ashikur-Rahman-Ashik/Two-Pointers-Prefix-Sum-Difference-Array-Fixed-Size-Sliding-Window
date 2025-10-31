#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int firstVectorSize, secondVectorSize;
    cin >> firstVectorSize >> secondVectorSize;
    vector<int> firstVector(firstVectorSize);
    vector<int> secondVector(secondVectorSize);

    for (int i = 0; i < firstVectorSize; i++)
    {
        cin >> firstVector[i];
    }

    for (int i = 0; i < secondVectorSize; i++)
    {
        cin >> secondVector[i];
    }

    int firstIndex = 0;
    int secondIndex = 0;
    int count = 0;

    while (secondIndex < secondVectorSize)
    {
        if (firstIndex < firstVectorSize && firstVector[firstIndex] < secondVector[secondIndex])
        {
            count++;
            firstIndex++;
        }
        else
        {
            cout << count << " ";
            secondIndex++;
        }
    }

    return 0;
}