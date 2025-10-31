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
        int stringSize;
        cin >> stringSize;

        string inputString;
        cin >> inputString;

        if (stringSize == 1)
        {
            cout << 1 << "\n";
            continue;
        }

        int leftIndex = 0;
        int rightIndex = stringSize - 1;
        int count = 0;

        while (leftIndex < rightIndex)
        {
            if (inputString[leftIndex] != inputString[rightIndex])
            {
                count = count + 2;
            }
            else
            {
                break;
            }

            leftIndex++;
            rightIndex--;
        }

        cout << stringSize - count << "\n";
    }

    return 0;
}