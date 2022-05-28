int max_level_printed_till_now = -1;

void left_view(Node *root,int current_level){
    if(root==NULL)
        return;
    if(current_level>max_level_printed_till_now){
        cout<<root->data;
        max_level_printed_till_now = current_level;
    }
    left_view(root->left,current_level+1);
    left_view(root->right,current_level+1);
}
