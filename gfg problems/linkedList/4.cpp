Intersection Point in Y Shapped Linked Lists
https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1/#
int intersectPoint(Node* head1, Node* head2)
{
    Node* temp1 = head1;
    Node* temp2 = head2;
    int m=0,n=0;
    while(temp1!=NULL){
        temp1 = temp1->next;
        m++;
    }
    while(temp2!=NULL){
        temp2 = temp2->next;
        n++;
    }
    if(m>n){
        while(m!=n){
            head1 = head1->next;
            m--;
        }
    }
    else{
        while(n!=m){
            head2 = head2->next;
            n--;
        }
    }
    while(head1!=head2){
        head1 = head1->next;
        head2 = head2->next;
    }
    return head1->data;
}