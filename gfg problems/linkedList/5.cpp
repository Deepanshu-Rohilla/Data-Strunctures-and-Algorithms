Remove loop in Linked List
https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1#
class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node* temp2 = head;
        Node* temp = head;
        int loopSize = 0;
        while(temp!=NULL){
            if(temp->next==NULL){
                return;
            }
            head = head->next;
            temp = temp->next->next;
            if(head==temp){
                loopSize = 1;
                temp = temp->next;
                while(temp!=head){
                    temp = temp->next;
                    loopSize++;
                }
                break;
            }
        }
        if(loopSize>0){
            temp = temp2;
            Node*prev = temp;
            for(int i=0;i<loopSize;i++){
                prev = temp2;
                temp2 = temp2->next;
            }
            while(temp!=temp2){
                prev = temp2;
                temp = temp->next;
                temp2 = temp2->next;
            }
            prev->next = NULL;
            
        }
        
    }
};