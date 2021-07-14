// C++ program to implement the Hospital 
// Management System 
#include <bits/stdc++.h> 
using namespace std; 

#define int long long 

int maxSubArray(vector<int>& nums) 
{
   	int size = nums.size();
    if (size == 1)
    {
        return nums[0];
    }
    else 
    {
        int ans = INT_MIN , mxSum = 0;
        for(int i = 0  ; i < size  ; i++)
        {
            mxSum = max(mxSum + nums[i] , nums[i]);
            ans = max(ans , mxSum);
        }
        return ans ;
    }
}

signed main()
{
	int n , num;
	cin >> n ;

	vector<int>v(n);
	for (int i = 0 ; i < n ; i++)
	{
		cin >> num ;
		v.push_back(num);
	}

	cout << maxSubArray(v) << endl;
}