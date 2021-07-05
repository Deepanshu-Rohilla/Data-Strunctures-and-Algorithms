Check for Balanced Tree
https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1#
int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);
    if(h1==-1 or h2==-1){
        return -1;
    }
    if(abs(h1-h2)>1){
        return -1;
    }
    int m = h1>h2 ? h1 : h2;
    return 1 + m;
}


//Function to check whether a binary tree is balanced or not.
bool isBalanced(Node *root)
{
    int h = height(root);
    return h!=-1;
}
