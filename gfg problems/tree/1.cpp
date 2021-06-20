Determine if Two Trees are Identical
https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1
class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        if(r1==NULL && r2==NULL){
            return true;
        }
        if(r1==NULL || r2==NULL){
            return false;
        }
        if(r1->data!=r2->data){
            return false;
        }
        return isIdentical(r1->left,r2->left) and isIdentical(r1->right, r2->right);
    }
};