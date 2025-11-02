#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> firstNegInt(vector<int> &arr, int k)
    {
        int vectorSize = arr.size();

        int leftTracker = 0;
        int rightTracker = 0;

        vector<int> integerVector;
        queue<int> integerQueue;

        while (rightTracker < vectorSize)
        {
            if (arr[rightTracker] < 0)
            {
                integerQueue.push(arr[rightTracker]);
            }

            if (rightTracker - leftTracker + 1 == k)
            {
                if (!integerQueue.empty())
                {
                    integerVector.push_back(integerQueue.front());

                    if (arr[leftTracker] == integerQueue.front())
                    {
                        integerQueue.pop();
                    }
                }
                else
                {
                    integerVector.push_back(0);
                }

                leftTracker++;
                rightTracker++;
            }
            else
            {
                rightTracker++;
            }
        }

        return integerVector;
    }
};