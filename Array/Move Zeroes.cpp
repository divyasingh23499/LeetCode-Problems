#include <bits/stdc++.h> 
using namespace std; 

#define int long long int 
#define pb  push_back 
#define s   second 
#define f   first

void moveZeroes(vector<int>& nums) 
{    
    int cnt = 0 , n = nums.size();
    for (int i = 0 ; i < nums.size() ; i++)
    {
        if (nums[i] == 0)
        {
            cnt ++;
        }
    }
    
    int index = 0 ;
    for (int i = 0 ;  i < n ; i++)
    {
        if (nums[i] != 0)
        {
            nums[index++] = nums[i];
        }
    }
    
    while (cnt--)
    {
        nums[index++] = 0;
    }
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
        
        moveZeroes(v1);
        for (int i = 0 ; i < n ; i++)
        {
            cout << v1[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
