Connect Nodes at Same Level
https://practice.geeksforgeeks.org/problems/connect-nodes-at-same-level/1
class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
        if(root!=NULL){
           vector<Node*>q;
           q.push_back(root);
           while(!q.empty()){
               vector<Node*>temp;
               int n = q.size();
               for(int i=0;i<n;i++){
                   if(i==n-1){
                       q[i]->nextRight = NULL;
                   }
                   else{
                       q[i]->nextRight = q[i+1];
                   }
                   if(q[i]->left!=NULL){
                       temp.push_back(q[i]->left);
                   }
                   if(q[i]->right!=NULL){
                       temp.push_back(q[i]->right);
                   }
               }
               q = temp;
           }
        }
       
    }    
      
};