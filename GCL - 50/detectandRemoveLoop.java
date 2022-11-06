class Solution{
    //Function to remove a loop in the linked list.
    public static void removeLoop(Node head){
      if(head==null || head.next==null){
          return;
      }
      Node slow = head;
      Node fast = head;
      while(fast!=null && fast.next!=null){
          slow = slow.next;
          fast = fast.next.next;
          if(slow==fast){
              break;
          }
      }
      if(slow==fast){
          if(fast==head){
              while(fast.next!=head){
                  fast = fast.next;
              }
              fast.next = null;
          }
          else{
            slow = head;
            while(slow.next!=fast.next){
              slow=slow.next;
              fast=fast.next;
            }
            fast.next = null;
         }
      }
    }
