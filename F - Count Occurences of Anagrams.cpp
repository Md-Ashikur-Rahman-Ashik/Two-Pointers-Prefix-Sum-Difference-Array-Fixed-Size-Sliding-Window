#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(string &pat, string &txt)
    {
        map<char, int> characterMap, answerMap;
        for (auto individualCharacter : pat)
        {
            answerMap[individualCharacter]++;
        }
        int leftIndex = 0, rightIndex = 0, count = 0;
        int txtSize = txt.length();
        int patSize = pat.length();

        while (rightIndex < txtSize)
        {
            characterMap[txt[rightIndex]]++;

            if (rightIndex - leftIndex + 1 == patSize)
            {
                if (characterMap == answerMap)
                {
                    count++;
                }

                characterMap[txt[leftIndex]]--;

                if (characterMap[txt[leftIndex]] == 0)
                {
                    characterMap.erase(txt[leftIndex]);
                }

                leftIndex++;
            }

            rightIndex++;
        }

        return count;
    }
};