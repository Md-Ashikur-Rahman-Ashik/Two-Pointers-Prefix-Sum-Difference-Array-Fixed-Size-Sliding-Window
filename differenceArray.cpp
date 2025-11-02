#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int vectorSize, queries;
    cin >> vectorSize >> queries;
    vector<int> integerVector(vectorSize + 1);
    for (int i = 1; i <= vectorSize; i++)
    {
        cin >> integerVector[i];
    }

    vector<int> differenceVector(vectorSize + 2);
    vector<int> prefixVector(vectorSize + 2);

    while (queries--)
    {
        int leftPosition, rightPosition, integerValue;
        cin >> leftPosition >> rightPosition >> integerValue;

        differenceVector[leftPosition] = differenceVector[leftPosition] + integerValue;
        differenceVector[rightPosition + 1] = differenceVector[rightPosition + 1] - integerValue;
    }

    for (int i = 1; i <= vectorSize; i++)
    {
        prefixVector[i] = prefixVector[i - 1] + differenceVector[i];
    }

    for (int i = 1; i <= vectorSize; i++)
    {
        cout << integerVector[i] + prefixVector[i] << " ";
    }

    return 0;
}