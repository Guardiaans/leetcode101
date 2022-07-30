/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 */

// @lc code=start
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

#include <iostream>

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {

        if (list1 == nullptr) // if list1 is empty, return list2
            return list2;
        if (list2 == nullptr) // if list2 is empty, return list1
            return list1;

        ListNode *head = nullptr; // head of the merged list
        ListNode *tail = nullptr; // tail of the merged list

        while (list1 != nullptr && list2 != nullptr) //
        {
            if (list1->val < list2->val)
            {
                if (head == nullptr)
                {
                    head = list1; // if head is null, assign list1 to head
                    tail = list1; // assign list1 to tail
                }
                else
                {
                    tail->next = list1; // assign list1 to tail->next
                    tail = tail->next;  // assign tail->next to tail
                }
                list1 = list1->next;
            }
            else
            {
                if (head == nullptr)
                {
                    head = list2;
                    tail = list2;
                }
                else
                {
                    tail->next = list2;
                    tail = tail->next;
                }
                list2 = list2->next;
            }
        }

        if (list1 == nullptr)
        {
            tail->next = list2;
        }
        else
        {
            tail->next = list1;
        }

        return head;
    }
};
// @lc code=end