#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubarraySum(vector<int> &arr, int k)
    {
        int vectorSize = arr.size();

        int leftPointer = 0;
        int rightPointer = 0;

        long long int answer = 0;
        long long int sum = 0;

        while (rightPointer < vectorSize)
        {
            sum = sum + arr[rightPointer];

            if (rightPointer - leftPointer + 1 == k)
            {
                answer = max(answer, sum);
                sum = sum - arr[leftPointer];
                leftPointer++;
                rightPointer++;
            }
            else
            {
                rightPointer++;
            }
        }

        return answer;
    }
};