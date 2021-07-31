#include <bits/stdc++.h> 
using namespace std; 

#define int long long int 
#define pb  push_back 
#define s   second 
#define f   first

//Container With Most Water
int removeDuplicates(vector<int>& nums)
{    
    int k = 0 ;
    set<int>s;
    for (int i = 0;  i < (int)nums.size() ;i++)
    {
        s.insert(nums[i]);
    }
    int index = 0 ;
    for (set<int>::iterator it = s.begin() ; it != s.end() ; it++)
    {
        nums[index++] = *it;
        cout << nums[index - 1] << " ";
    }

    k = (int)s.size();
    return k ;
}
signed main()
{
    int test = 1;
    //cin>> test ;
    while(test--)
    {
        int n ;
        cin >> n ;
        vector<int>v(n);

        for (int i = 0 ; i < n ; i++)
        {
            cin >> v[i];
        }
        cout << removeDuplicates(v) << endl;
    }

}
