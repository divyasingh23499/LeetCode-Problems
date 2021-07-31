#include <bits/stdc++.h> 
using namespace std; 

#define int long long int 
#define pb  push_back 
#define s   second 
#define f   first

/*
int maxprofit = 0;
        for (int i = 1; i < (int)prices.size(); i++) {
            if (prices[i] > prices[i - 1])
                maxprofit += prices[i] - prices[i - 1];
        }
        return maxprofit;
    }
*/

int maxProfit(vector<int> &prices) 
{
    int i = 0;
    int valley = prices[0];
    int peak = prices[0];
    int maxprofit = 0;
    int n = prices.size();
    while (i < n - 1) 
    {
        while (i < n - 1 && prices[i] >= prices[i + 1])
            i++;
        valley = prices[i];
        
        cout << "Valley :" << valley << endl;
        while (i < n - 1 && prices[i] <= prices[i + 1])
            i++;
        peak = prices[i];
        
       cout << "Peak:" << peak << endl;
        maxprofit += peak - valley;
    }
    return maxprofit;
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
        cout << maxProfit(v) << endl;
    }

}
