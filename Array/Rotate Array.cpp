#include <bits/stdc++.h> 
using namespace std; 

#define int long long int 
#define pb  push_back 
#define s   second 
#define f   first

void rotate(vector<int>& nums, int k) {
    
    int n = nums.size();
    if (k % n == 0 || n <= 1)
    {
        return ;
    }
    else 
    {
        if (k > n)
        {
             k = k % n ;
        }
        vector<int>temp;
        for (int i = 0 ;  i < n -  k; i++)
        {
            temp.push_back(nums[i]);
        }
        for (int i = 0 ; i < k ; i++)
        {
            nums[i] = nums[n - k + i];
        }
        
        int index = 0;
        for (int i = k ; i < n ; i++)
        {
            nums[i] = temp[index++];
        }
    }
}
signed main()
{
    int test = 1;
    //cin>> test ;
    while(test--)
    {
        int n , k;
        cin >> n ;
        vector<int>v(n);

        for (int i = 0 ; i < n ; i++)
        {
            cin >> v[i];
        }
        cin >> k ;
        rotate(v , k);

        for (int i = 0 ; i  < n ; i ++)
        {
            cout << v[i] << " ";
        }
    }
    return 0;
}
