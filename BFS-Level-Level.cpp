struct Node{
    int data;
    Node *left;
    Node *right;
}
void bfs(Node *root){
    queue<Node *> q;
    q.push(root)
    while(q.empty()==false){
        int size= q.size();
        while(size--){
            Node *current= q.front();
            q.pop();
            cout<<current->data<<" ";
            if(current->left){
                q.push(current->left);
            }
            if(current->right){
                q.push(current->right);
            }
        }
        cout<<endl;   
    }
}
