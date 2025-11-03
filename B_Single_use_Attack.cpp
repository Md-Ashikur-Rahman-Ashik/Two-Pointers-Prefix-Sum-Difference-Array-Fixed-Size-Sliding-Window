#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int health, singleReduce, specialReduce;
        cin >> health >> singleReduce >> specialReduce;

        int count = 0;
        health = health - specialReduce;
        count++;

        while (health > 0)
        {
            health = health - singleReduce;
            count++;
        }

        cout << count << "\n";
    }

    return 0;
}