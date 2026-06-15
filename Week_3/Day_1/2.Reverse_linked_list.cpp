class Solution
{
public:
    ListNode *reverselist(ListNode *head)
    {
        ListNode *temp = head;
        ListNode *prev = NULL;
        while (temp != NULL)
        {
            ListNode *front = temp->next;
            temp->next;
            prev = temp;
            temp = front;
        }
        return prev;
    }
};