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
        int stringSize, integerValue;
        cin >> stringSize >> integerValue;

        string inputString;
        cin >> inputString;

        int currentSwipe = 0;

        bool flag = true;

        for (int i = 0; i < stringSize; i++)
        {
            if (inputString[i] == '0')
            {
                if (currentSwipe <= 0)
                {
                    flag = false;
                    break;
                }
                else
                {
                    currentSwipe--;
                }
            }
            else
            {
                currentSwipe = integerValue;
            }
        }

        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}