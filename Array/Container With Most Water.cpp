#include <bits/stdc++.h> 
using namespace std; 

#define int long long int 
#define pb  push_back 
#define s   second 
#define f   first

//Container With Most Water
int maxArea(vector<int>& arr) {
    
    int n = (int)arr.size();
    int left = 0, right = n - 1 , res = 0;
    while(left < right)
    {
        res = max(res , min(arr[left] , arr[right]) * (right - left));
        
        if (left < right && arr[left] < arr[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return res;
}
signed main()
{
    int test = 1;
    cin>> test ;
    while(test--)
    {
        int n ;
        cin >> n ;
        vector<int>v(n);

        for (int i = 0 ; i < n ; i++)
        {
            cin >> v[i];
        }
        cout << maxArea(v) << endl;
    }

}