void top_view(Node *root){
    queue<pair<Node*,int> > q;
    q.push({root,0});
    map<int,Node *> hash;
    while(q.empty()==false){
        pair<Node*,int> curr = q.front();
        q.pop();
        int level   = curr.second;
        Node * temp = curr.first;
        if(hash[level]==NULL){
            // KEY DOES NT EXIST FOR THIS LEVEL
            hash[level]=curr;
            // THIS BELONGS TO TOP VIEW
        }
        if(temp->left){
            q.push({temp->left, level-1 });
        }
        if(curr->right){
            q.push({temp->right,level+1});
        }
    }   
    for(auto it:hash){
        cout<<it.second->data<<" ";
    }
    cout<<endl;
}
