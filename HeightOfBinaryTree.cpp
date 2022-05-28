
int height(Node *root){
    if(root==NULL){
        return 0;   
    }
    if(root->left==NULL and root->right==NULL){
        return 1;
    }
    return max(height(root->left),height(root->right))+1;
}
