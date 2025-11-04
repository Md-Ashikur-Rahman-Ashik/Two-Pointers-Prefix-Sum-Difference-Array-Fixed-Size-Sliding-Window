#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int vectorSize, desiredSize;
    cin >> vectorSize >> desiredSize;
    map<int, int> frequencyMap;
    int count = 0;
    long long int answer = 0;
    vector<int> integerVector(vectorSize + 1);

    for (int i = 1, j = 1; j <= vectorSize; j++)
    {
        cin >> integerVector[j];
        frequencyMap[integerVector[j]]++;

        if (frequencyMap[integerVector[j]] == 1)
        {
            count++;
        }

        while (count > desiredSize)
        {
            frequencyMap[integerVector[i]]--;
            if (frequencyMap[integerVector[i]] == 0)
            {
                count--;
            }

            i++;
        }

        answer = answer + (j - i + 1);
    }

    cout << answer;

    return 0;
}