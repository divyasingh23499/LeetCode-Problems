#include <bits/stdc++.h> 
using namespace std; 

#define int long long int 
#define pb  push_back 
#define s   second 
#define f   first

vector<int> plusOne(vector<int>& digits) 
{
    int n = (int)digits.size() , car = 0 , num;
    for (int i = n - 1 ; i >=0 ; i --)
    {
        if (i == n - 1)
            num = (digits[i] + 1 + car);
        else 
            num = digits[i] + car ;
        digits[i] = num % 10;
        car = num / 10;
    }
    
    if (car != 0)
    {
        digits.insert(digits.begin() , car);    
    }
    return digits;
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
        
        vector<int>output = plusOne(output);
        for (int i = 0 ; i < (int)output.size() ; i++)
        {
            cout << output[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
