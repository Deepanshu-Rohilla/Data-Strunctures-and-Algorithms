Reverse a linked list
https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1
class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        if(head->next==NULL){
            return head;
        }
        Node* prev = NULL;
        Node* next = NULL;
        while(head!=NULL){
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
};