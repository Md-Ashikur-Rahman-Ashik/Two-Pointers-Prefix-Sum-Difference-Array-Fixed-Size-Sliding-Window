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

        int goalOfBlack = desiredBlack;

        string inputString;
        cin >> inputString;

        int maxBlack = INT_MIN;
        int countBlack = 0;
        int countWhite = 0;

        for (auto individualCharacter : inputString)
        {
            if (individualCharacter == 'B')
            {
                countBlack++;
                maxBlack = max(maxBlack, countBlack);
            }
            else
            {
                if (goalOfBlack > 0 && goalOfBlack - maxBlack > 0)
                {
                    goalOfBlack--;
                    countWhite++;
                }
                else if (goalOfBlack > 0 && maxBlack == INT_MIN)
                {
                    goalOfBlack--;
                    countWhite++;
                }

                if (countBlack > 0)
                {
                    maxBlack = max(maxBlack, countBlack);
                    countBlack = 0;
                }
            }
        }

        if (maxBlack >= desiredBlack)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << countWhite << "\n";
        }
    }

    return 0;
}