#include <bits/stdc++.h> 
using namespace std; 

#define int long long int 
#define pb  push_back 
#define s   second 
#define f   first

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int sum = 0;
        
        // This is acting as head  
        ListNode *l3 = NULL;
        ListNode **node = &l3;
        while(l1 != NULL || l2 != NULL||sum>0)
        {
            if(l1!=NULL)
            {
                sum += l1 -> val;
                l1 = l1 -> next;
            }
            if(l2 != NULL)
            {
                sum += l2 -> val;
                l2 = l2 -> next;
            }
            (*node) = new ListNode(sum % 10);
            sum /= 10;
            node = &((*node)->next);
        }        
        return l3;
        
    }
};