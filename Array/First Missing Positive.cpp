// C++ program to implement the Hospital 
// Management System 
#include <bits/stdc++.h> 
using namespace std; 

#define int long long 

int firstMissingPositive(vector<int>& nums) 
{
    
    for(int i = 0; i < (int)nums.size(); ++i)
    {
    	while(nums[i] != i + 1)
		{
   	        if(nums[i] > 0 && nums[i] <= (int)nums.size() && nums[nums[i] - 1] != nums[i])
        	{
                swap(nums[i],nums[nums[i] - 1]);
            }
            else
            {
                break;
            }
        }
   	}
        
    int result = (int)nums.size() + 1;
    
    for(int i = 0; i < (int)nums.size(); ++i)
    {
        if(nums[i] != i + 1)
        {
            result = i + 1;
            break;
        }
    }
    
    return result;
}


signed main()
{
	int n ;
	cin >> n ;

	vector<int>vec(n);
	for (int i = 0 ; i < n ; i++)
	{
		int num ;
		cin>> num ;
		vec.push_back(num);
	}

	cout << firstMissingPositive(vec) << endl;
}
