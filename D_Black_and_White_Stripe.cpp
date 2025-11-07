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
        int stringSize, desiredBlack;
        cin >> stringSize >> desiredBlack;

        string inputString;
        cin >> inputString;

        long long int goalOfBlack = desiredBlack, countWhite = 0;

        for (int i = 0; i < goalOfBlack; i++)
        {
            if (inputString[i] == 'W')
                countWhite++;
        }

        goalOfBlack = countWhite;

        for (int i = desiredBlack; i < stringSize; i++)
        {
            if (inputString[i - desiredBlack] == 'W')
                countWhite--;
            if (inputString[i] == 'W')
                countWhite++;

            goalOfBlack = min(goalOfBlack, countWhite);
        }

        cout << goalOfBlack << "\n";
    }

    return 0;
}