Lowest Common Ancestor in a BST
https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1
Node* LCA(Node *root, int n1, int n2)
{
   while(root!=NULL){
       if(root->data>n1 && root->data>n2){
           root = root->left;
       }
       else if(root->data<n1 && root->data<n2){
           root = root->right;
       }
       else{
           break;
       }
   }
   return root;
}
