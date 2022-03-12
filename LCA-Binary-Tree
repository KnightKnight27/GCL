Node *ans=NULL;
pair <bool,bool> check (Node *A,Node *B,Node *root){
    if(ans){
        return {true,true};
    }
    if(root==NULL){
        return {false,false}; 
    }
    pair<bool,bool > left =   check(A,B,root->left);
    pair<bool,bool>  right =  check(A,B,root->right);
    bool f1=false;
    bool f2=false;
    if(A==root){
        f1=true;
    }
    if(B==root){
        f2=true;
    }
    f1= f1 || left.first || right.first;
    f2= f2 || left.second|| right.second;
    if(f1==true and f2==true and ans==NULL){
        ans=root;

    } 
    return {f1,f2}; 
}

