#include <bits/stdc++.h> 
using namespace std; 

#define int long long int 
#define pb  push_back 
#define s   second 
#define f   first

int jump(vector<int>& nums) 
{
    if ((int)nums.size() == 1) 
        return 0;
    else if (nums[0] == 0) 
        return -1;
    else 
    {
        int mxReach = nums[0];
        int step = nums[0];
        int jump = 1;
        
        for (int i = 1; i < (int)nums.size() ; i++)
        {
            if (i == (int)nums.size() - 1) 
                return jump;
            mxReach = max(mxReach , i + nums[i]);
            step--;
            if (step == 0)
            {
                jump++;
                if (i >= mxReach)
                {
                    return -1;
                }
                step = mxReach - i;
            }
        }
    }
    return -1;
}

signed main()
{
    int test_case = 1;
    //cin >> test_case ;
    while(test_case--)
    {
        int n ;
        cin >> n ;

        vector<int>vec;
        for (int i = 0 ; i  < n ; i++)
        {
            int number ;
            cin >> number;
            vec.pb(number);
        }
        cout << jump(vec);
    }
}


