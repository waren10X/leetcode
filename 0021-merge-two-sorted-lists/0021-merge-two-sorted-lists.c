#include <stdio.h>

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    struct ListNode* head = NULL;
    struct ListNode* tail = NULL; 

    if (list1 == NULL)
    {
        return (list2);
    }

    if (list2 == NULL)
    {
        return (list1);
    }

    while (list1 != NULL && list2 != NULL)
    {
        struct ListNode* temp;

        if (list1->val < list2->val)
        {
            temp = list1;
            list1 = list1->next;
        }
        else
        {
            temp = list2;
            list2 = list2->next;
        }

        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    if (list1 != NULL)
    {
        tail->next = list1;
    }

    if (list2 != NULL)
    {
        tail->next = list2;
    }

    return (head);
}

void printList(struct ListNode* head) 
{
    while (head != NULL)
    {
        printf("%d ", head->val);
        head = head->next;
    }

    printf("\n");
}