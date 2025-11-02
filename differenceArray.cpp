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

    while (queries--)
    {
        int leftPosition, rightPosition, integerValue;
        cin >> leftPosition >> rightPosition >> integerValue;

        for (int i = leftPosition; i <= rightPosition; i++)
        {
            integerVector[i] = integerVector[i] + integerValue;
        }
    }

    for (int i = 1; i <= vectorSize; i++)
    {
        cout << integerVector[i] << " ";
    }

    return 0;
}