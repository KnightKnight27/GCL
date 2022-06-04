}
Node *r(int start,int end,vector<int> &arr){
    if(start>end){
        return NULL;
    }
    if(start==end){
        return new Node(arr[start]);
    }
    int mid = (start+end)/2;
    Node * root =  new Node(arr[mid]);
    root->left  =  r(start,mid-1,arr);
    root->right =  r(mid+1,end,arr);
    return root;
}
Node * createBST(vector<int> arr){
    sort(arr.begin(),arr.end());
    int start = 0;
    int end   = arr.size()-1;
    return r(start,end,arr)
}
