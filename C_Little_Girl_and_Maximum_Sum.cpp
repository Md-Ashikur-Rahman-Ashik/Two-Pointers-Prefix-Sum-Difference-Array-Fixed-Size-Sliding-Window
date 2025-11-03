#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int vectorSize, queries;
    cin >> vectorSize >> queries;
    vector<long long int> integerVector(vectorSize);
    for (int i = 0; i < vectorSize; i++)
    {
        cin >> integerVector[i];
    }

    vector<long long int> differenceVector(vectorSize + 1);

    while (queries--)
    {
        int leftIndex, rightIndex;
        cin >> leftIndex >> rightIndex;
        leftIndex--;
        rightIndex--;

        differenceVector[leftIndex]++;
        differenceVector[rightIndex + 1]--;
    }

    for (int i = 1; i <= vectorSize; i++)
    {
        differenceVector[i] = differenceVector[i - 1] + differenceVector[i];
    }

    sort(integerVector.rbegin(), integerVector.rend());
    sort(differenceVector.rbegin(), differenceVector.rend());

    long long int answer = 0;

    for (int i = 0; i < vectorSize; i++)
    {
        answer = answer + (integerVector[i] * differenceVector[i]);
    }

    cout << answer;

    return 0;
}