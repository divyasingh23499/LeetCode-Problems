#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define pb  push_back
#define s   second
#define f   first

/*int lengthOfLongestSubstring(string s) {

    set<int>duplicateRemover;
    int l = 0;
    int result = 0 , n = (int)s.size();

    for (int r = 0 ; r < n ; r++)
    {
        while (duplicateRemover.find(s[r]) != duplicateRemover.end())
        {
            duplicateRemover.erase(s[l]);
            l ++;
        }

        duplicateRemover.insert(s[r]);
        result = max(result , r - l + 1);
    }

    return result ;
}*/

/*
This is more optimise code comperision above code
*/
int longestUniqueSubsttr(string str)
{
    int n = str.size();

    int res = 0;
    vector<int> lastIndex(NO_OF_CHARS, -1);
    int i = 0;

    for (int j = 0; j < n; j++)
    {

        // Find the last index of str[j]
        // Update i (starting index of current window)
        // as maximum of current value of i and last
        // index plus 1
        i = max(i, lastIndex[str[j]] + 1);

        // Update result if we get a larger window
        res = max(res, j - i + 1);

        // Update last index of j.
        lastIndex[str[j]] = j;
    }
    return res;
}


signed main()
{
    int test = 1;
    //cin>> test ;
    while(test--)
    {
        string str ;
        cin >> str ;
        cout << lengthOfLongestSubstring(str) << endl;
    }

}
