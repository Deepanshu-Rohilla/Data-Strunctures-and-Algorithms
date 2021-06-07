Rotate a Linked List
https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1#
class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        if(head->next==NULL){
            return head;
        }
        Node* temp = head;
        while(k!=1){
            head = head->next;
            k--;
        }
        if(head->next==NULL){
            return temp;
        }
        Node* ans = head->next;
        head->next = NULL;
        Node* temp2 = ans;
        while(temp2->next!=NULL){
            temp2 = temp2->next;
        }
        temp2->next = temp;
        return ans;
    }
};

class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = head;
        while(k!=1){
            head = head->next;
            k--;
        }
        Node* ans = head->next;
        head->next = NULL;
        return ans;
    }
};