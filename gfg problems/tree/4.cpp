Symmetric Tree
https://practice.geeksforgeeks.org/problems/symmetric-tree/1#
bool mirror(Node* root1, Node* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    if(root1==NULL || root2==NULL){
        return false;
    }
    if(root1->data!=root2->data){
        return false;
    }
    return mirror(root1->left, root2->right)&& mirror(root1->right, root2->left);
    
}
// return true/false denoting whether the tree is Symmetric or not
bool isSymmetric(struct Node* root)
{
	return mirror(root,root);
}

