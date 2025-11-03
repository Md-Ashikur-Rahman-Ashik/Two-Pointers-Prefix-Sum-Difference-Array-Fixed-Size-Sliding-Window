#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int vectorSize;
        cin >> vectorSize;
        vector<int> firstVector(vectorSize);
        vector<int> secondVector(vectorSize);

        for (int i = 0; i < vectorSize; i++)
        {
            cin >> firstVector[i];
        }

        for (int i = 0; i < vectorSize; i++)
        {
            cin >> secondVector[i];
        }

        long long int count = 0;

        for (int i = 0; i < vectorSize; i++)
        {
            if (firstVector[i] > secondVector[i] && firstVector[i] <= secondVector[i] * 2)
            {
                count++;
            }
            else if (firstVector[i] < secondVector[i] && secondVector[i] <= firstVector[i] * 2)
            {
                count++;
            }
            else if (firstVector[i] == secondVector[i])
            {
                count++;
            }
        }

        cout << count << '\n';
    }

    return 0;
}