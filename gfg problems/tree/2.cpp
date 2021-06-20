Left View of Binary Tree
https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1
vector<int> leftView(Node *root)
{
    vector<int> ans;
   if(root==NULL){
       return ans;
   }
   queue<Node*> q;
   q.push(root);
   while(!q.empty()){
       int n = q.size();
       for(int i=0;i<n;i++){
           Node* temp = q.front();
           q.pop();
           if(i==0){
               ans.push_back(temp->data);
           }
           if(temp->left!=NULL){
               q.push(temp->left);
           }
           if(temp->right!=NULL){
               q.push(temp->right);
           }
       }
   }
   return ans;
}