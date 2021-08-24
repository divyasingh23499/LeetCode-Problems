#include <bits/stdc++.h> 
using namespace std; 

#define int long long int 
#define pb  push_back 
#define s   second 
#define f   first

int singleNumber(vector<int>& nums) {
    
    
    map<int,int>mp;
    int n = nums.size();
    for (int i = 0 ;  i < n ; i ++)
    {
        mp[nums[i]]++;
    }
    
    for (auto it = mp.begin() ; it != mp.end() ; it ++)
    {
        if (it -> second == 1)
        {
            return it -> first ;
        }
    }
    return -1;
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
        
       cout << singleNumber(v) << endl;
    }
    return 0;
}
