Nth node from end of linked list
https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1
int getNthFromLast(Node *head, int n)
{
       int size=0;
       Node* temp = head;
       while(temp!=NULL){
           temp = temp->next;
           size++;
       }
       if(n>size){
           return -1;
       }
       Node* ans = head;
       int inc = size - n;
       for(int i=0;i<inc;i++){
           ans = ans->next;
       }
       return ans->data;
}
