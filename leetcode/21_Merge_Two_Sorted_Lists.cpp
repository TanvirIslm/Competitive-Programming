#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    
    ListNode *takeInput()
    {
        int data;
        cin >> data;
        ListNode *head = nullptr;
        ListNode *tail = nullptr;
        while (data != -1)
        {
            ListNode *newNode = new ListNode(data);
            if (head == nullptr)
            {
                head = newNode;
                tail = newNode;
            }
            else
            {
                tail->next = newNode;
                tail = newNode;
            }
            cin >> data;
        }
        return head;
    }

    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2){
        ListNode *dummy = new ListNode(0);
        ListNode *tail = dummy;
        while (list1 != NULL && list2 != NULL){
            if (list1->val <= list2->val){
                tail->next = list1;  
                list1 = list1->next; 
            }else{
                tail->next = list2;  
                list2 = list2->next; 
            }
            tail = tail->next; 
        }
        if (list1 != NULL){
            tail->next = list1;
        }else{
            tail->next = list2;
        }
        ListNode *result = dummy->next;
        delete dummy; 
        return result;
    }
};