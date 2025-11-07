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
        int stringSize, maxMove;
        cin >> stringSize >> maxMove;

        string inputString;
        cin >> inputString;

        int count = 0;

        int i = 0;
        while (i < stringSize)
        {
            if (inputString[i] == 'B')
            {
                count++;
                i = i + maxMove;
            }
            else
            {
                i++;
            }
        }

        cout << count << '\n';
    }

    return 0;
}