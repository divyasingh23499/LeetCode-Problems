#include <bits/stdc++.h> 
using namespace std; 

#define int long long int 
#define pb  push_back 
#define s   second 
#define f   first

bool containsDuplicate(vector<int>& nums) {
    map<int,int>mp;
    for (int i = 0 ;  i < (int)nums.size() ; i++)
    {
        mp[nums[i]]++;
    }
    
    for (auto it = mp.begin() ; it != mp.end() ; it ++)
    {
        if (it -> second > 1)
        {
            return true ;
        }
    }
    
    return false ;
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
        
       cout << containsDuplicate(v) << endl;
    }
    return 0;
}
