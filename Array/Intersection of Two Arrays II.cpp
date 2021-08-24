#include <bits/stdc++.h> 
using namespace std; 

#define int long long int 
#define pb  push_back 
#define s   second 
#define f   first

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
{ 
    vector<int>v;
    map<int,int>mp;
    for (int i = 0 ; i < (int)nums1.size() ; i++)
    {
        mp[nums1[i]]++;
    }
    
    for (int i = 0 ;  i < (int)nums2.size() ; i ++)
    {
        if (mp[nums2[i]] != 0)
        {
            v.push_back(nums2[i]);
            mp[nums2[i]]--;
        }
        
    }
    
    return v;
}
signed main()
{
    int test = 1;
    cin>> test ;
    while(test--)
    {
        int n ;
        cin >> n ;
        vector<int>v1(n);
        for (int i = 0 ; i < n ;  i++)
        {
            cin >> v1[i];
        }
        int m ;
        cin>> m ;
        vector<int>v2(m);
        for (int i = 0 ; i < m ;  i++)
        {
            cin >> v2[i];
        }
        vector<int>output = intersect(v1 , v2);
        for (int i = 0 ; i < (int)output.size() ; i++)
        {
            cout << output[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
