Finding middle element in a linked list
https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1
int getMiddle(Node *head)
{
   if(head==NULL){
       return -1;
   }
   Node* temp = head;
   while(head!=NULL){
       if(head->next==NULL){
           return temp->data;
       }
       temp = temp->next;
       head = head->next->next;
   }
   return temp->data;
}