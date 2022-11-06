class LinkedList
{
    Node sortedMerge(Node head1, Node head2) {
        Node it1 = head1;
        Node it2 = head2;
        Node dummyNode = new Node(0);
        Node temp = dummyNode;
        while(it1!=null && it2!=null){
            if(it1.data < it2.data){
                dummyNode.next = it1;
                it1 = it1.next;
            }
            else{
                dummyNode.next = it2;
                it2 = it2.next;
            }
            dummyNode = dummyNode.next;
        }
        if(it1!=null){
            dummyNode.next = it1;
        }
        else{
            dummyNode.next = it2;
        }
        return temp.next;
    } 
}
