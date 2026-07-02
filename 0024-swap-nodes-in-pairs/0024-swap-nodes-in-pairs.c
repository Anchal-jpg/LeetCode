/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* swapPairs(struct ListNode* head) {
    // Create a dummy node before the head
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* prev = &dummy;

    while (head != NULL && head->next != NULL) {
        // Identify the two nodes to swap
        struct ListNode* first = head;
        struct ListNode* second = head->next;

        // Perform the swap
        prev->next = second;
        first->next = second->next;
        second->next = first;

        // Move pointers forward
        prev = first;
        head = first->next;
    }

    return dummy.next;
}
