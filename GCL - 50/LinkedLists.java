package com.company;
class Node{
    int data;
    Node next;
    Node(int data){
        this.data = data;
        this.next = null;
    }
}
public class Main {
    public static Node head;
    public static Node otherHalf;
    public static void insertAtBeginning(int new_data){
        Node temp = new Node(new_data);
        temp.next = head;
        head = temp;
    }
    public static void printLinkedList(Node head){
        Node iterator = head;
        while(iterator!=null){
            System.out.print(iterator.data + " ");
            iterator = iterator.next;
        }
        System.out.print("\n");
    }
    public static void insertAtEnd(int new_data){
        if(head == null){
            Node temp = new Node(new_data);
            head = temp;
            return;
        }
        Node iterator = head;
        while(iterator.next!=null){
            iterator = iterator.next;
        }
        Node temp = new Node(new_data);
        iterator.next = temp;
    }
    public static void reverseLinkedList(){
        Node prev = null;
        Node current = otherHalf;
        while(current!=null){
            Node temp = current.next;
            current.next = prev;
            prev = current;
            current = temp;
        }
        otherHalf = prev;
    }
    public static Node findMiddle(){
        Node slow = head;
        Node fast = head.next;
        while(fast!=null && fast.next!=null){
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
    }
    public static void main(String[] arg) {
        insertAtEnd(11);
        insertAtEnd(12);
        insertAtEnd(15);
        insertAtEnd(10);
        insertAtEnd(10);
        insertAtEnd(15);
        insertAtEnd(13);
        insertAtEnd(11);
        Node middleNode = findMiddle();
        otherHalf = middleNode.next;
        middleNode.next = null;
        reverseLinkedList();
        Node it1 = head;
        Node it2 = otherHalf;
        boolean flag = true;
        while(it1!=null  && it2!=null){
            if(it1.data!= it2.data){
                flag = false;
            }
            it1 = it1.next;
            it2 = it2.next;
        }
        if(flag){
            System.out.print("Palindrome");
        }
        else{
            System.out.print("not palindrome");
        }

    }

}
