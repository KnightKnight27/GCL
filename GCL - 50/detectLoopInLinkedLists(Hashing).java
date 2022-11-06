class Solution {
    //Function to check if the linked list has a loop.
    public static boolean detectLoop(Node head){
        HashSet<Node> visited = new HashSet<Node>();
        Node it = head;
        while(it!=null){
            if(visited.contains(it)){
                return true;
            }
            visited.add(it);
            it = it.next;
        }
        return false;
        
    }
}
