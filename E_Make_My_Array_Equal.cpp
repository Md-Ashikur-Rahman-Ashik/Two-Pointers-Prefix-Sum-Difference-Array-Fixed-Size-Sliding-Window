#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int setSize;
        cin >> setSize;
        multiset<int> integerSet;

        for (int i = 0; i < setSize; i++)
        {
            int integerValue;
            cin >> integerValue;
            integerSet.insert(integerValue);
        }

        int maxValue = *integerSet.rbegin();

        bool flag = true;

        auto it = integerSet.begin();

        while (it != --integerSet.end())
        {
            int integerValue = *it;
            if (integerValue != maxValue)
            {
                integerSet.erase(it);
                auto findIT = integerSet.find(maxValue - integerValue);

                if (findIT == integerSet.end())
                {
                    flag = false;
                    break;
                }
            }
            else
            {
                if (it != --integerSet.end())
                {
                    it++;
                }
                else
                {
                    break;
                }
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