#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int vectorSize, desiredValue;
    cin >> vectorSize >> desiredValue;
    vector<long long int> integerVector(vectorSize + 1);

    map<long long int, vector<long long int>> integerMap;

    for (int i = 1; i <= vectorSize; i++)
    {
        cin >> integerVector[i];
        long long int integerValue = integerVector[i];
        integerMap[integerValue].push_back(i);
    }

    sort(integerVector.begin(), integerVector.end());

    int i = 1;
    int j = vectorSize;

    int leftIndexValue = INT_MIN;
    int rightIndexValue = INT_MIN;

    while (i < j)
    {
        int leftValue = integerVector[i];
        int rightValue = integerVector[j];

        if (leftValue + rightValue == desiredValue)
        {
            leftIndexValue = leftValue;
            rightIndexValue = rightValue;
            break;
        }

        long long int sum = leftValue + rightValue;
        if (sum > desiredValue)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    if (leftIndexValue != INT_MIN && rightIndexValue != INT_MAX)
    {
        int leftIndex, rightIndex;

        if (leftIndexValue == rightIndexValue)
        {
            leftIndex = integerMap[leftIndexValue][0];
            rightIndex = integerMap[rightIndexValue][1];
        }
        else
        {
            leftIndex = integerMap[leftIndexValue][0];
            rightIndex = integerMap[rightIndexValue][0];
        }

        cout << leftIndex << " " << rightIndex;
    }
    else
    {
        cout << "IMPOSSIBLE";
    }

    return 0;
}