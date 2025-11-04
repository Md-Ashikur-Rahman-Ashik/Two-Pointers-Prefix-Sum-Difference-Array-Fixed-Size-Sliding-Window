#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int vectorSize, queries;
    cin >> vectorSize >> queries;
    vector<long long int> integerVector(vectorSize + 1);
    vector<long long int> sumVector(vectorSize + 1);

    for (int i = 1; i <= vectorSize; i++)
    {
        cin >> integerVector[i];
        sumVector[i] = sumVector[i - 1] + integerVector[i];
    }

    while (queries--)
    {
        int leftIndex, rightIndex;
        cin >> leftIndex >> rightIndex;

        long long int answer = sumVector[rightIndex] - sumVector[leftIndex - 1];
        cout << answer << '\n';
    }

    return 0;
}