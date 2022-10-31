/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */

class Solution {
    public void deleteNode(ListNode node) {
        // Since we know input node is not last node, so nextNode will not be null
        ListNode nextNode = node.next;
        // Step 2
        node.val = nextNode.val;
        // Step 3
        node.next = nextNode.next;
        nextNode.next = null;
    }
}
