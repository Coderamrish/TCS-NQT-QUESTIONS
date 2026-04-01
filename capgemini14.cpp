/*
Reverse a Linked List
Problem: Reverse a singly linked list.

Input: 1 -> 2 -> 3 -> 4 -> 5

Output: 5 -> 4 -> 3 -> 2 -> 1
*/
#include <iostream>
using namespace std;;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* current = head;
    while (current != nullptr) {
        ListNode* nextTemp = current->next; 
        current->next = prev; 
        prev = current; 
        current = nextTemp; 
    }
    return prev; 
}
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    
    cout << "Original list: ";
    printList(head);
    
    ListNode* reversedHead = reverseList(head);
    
    cout << "Reversed list: ";
    printList(reversedHead);
    
    return 0;
}
/*

TC: O(n)
SC: O(1)


*/
