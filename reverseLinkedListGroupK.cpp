Node *reverseList(Node *head,int K){
    int count=0;
    Node *prev = NULL;
    Node *curr = head;
    while(curr!=NULL and count<K){
        Node * nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
        count++;
    }
    if(curr!=NULL){
        head->next = reverseList(curr,K);
    }
    return prev;
}
