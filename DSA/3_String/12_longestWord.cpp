#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    string str, maxstr;
    cout << "Enter the string to search for smallest longest word:" << endl;
    cin >> str;
    int lettercountinitial = 0, startindex = 0, endindex = 0, currentlength, minimumlength, maximumlength, minstartindex, maxstartindex;
    while (endindex < strlen(str))
    {
        if (endindex < strlen(str) && str[endindex] != ' ')
        {
            endindex++;
        }
        else
        {
            currentlength = endindex - startindex;
            if (currentlength < minimumlength)
            {
                minimumlength = currentlength;
                minstartindex = startindex;
            }
            if (currentlength > maximumlength)
            {
                maximumlength = currentlength;
                maxstartindex = startindex;
            }
            endindex++;
            startindex = endindex;
        }
        string minword, maxword;
        for (int i = 0, j = minstartindex; i < minimumlength; i++, j++)
        {
            minword[i] == str[j];
        }
        for (int i = 0, j = maxstartindex; i < maximumlength; i++, j++)
        {
            maxword[i] = str[j];
        }

        cout << "Smallest word in this string is : \t" << minword << endl;
        cout << "Largest word in this string is : \t" << maxword << endl;

        return 0;
    }
}