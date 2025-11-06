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
        vector<int> integerVector(vectorSize);
        long long int sum = 0;

        for (int i = 0; i < vectorSize; i++)
        {
            cin >> integerVector[i];
            sum = sum + abs(integerVector[i]);
        }

        int index = 0, move = 0;
        while (index < vectorSize)
        {
            if (integerVector[index] < 0)
            {
                while (index < vectorSize && integerVector[index] <= 0)
                {
                    index++;
                }

                move++;
            }
            else
            {
                index++;
            }
        }

        cout << sum << " " << move << "\n";
    }

    return 0;
}