#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};

void pushAtFront(node** headPtr, int data){
    node *temp = new node();
    temp->data = data;
    temp->next = *headPtr;
    *headPtr = temp;
}

void printList(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main(){
    node* head = NULL;
    pushAtFront(&head, 1);  
    pushAtFront(&head, 2);  
    pushAtFront(&head, 3);  
    pushAtFront(&head, 4);  
    pushAtFront(&head, 5);  
    printList(head);
    return 0;
}