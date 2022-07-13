#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    if(head == NULL || head->next == NULL){
        return head;
    }
    LinkedListNode<int>* dummy = NULL;
    LinkedListNode<int>* newHead = NULL;
    LinkedListNode<int>* curr = head;
    while(curr->next!= NULL){
        newHead = curr->next;
        curr->next = dummy;  
        dummy = curr;
        curr = newHead;
        curr->next = newHead->next;
    }
    curr->next = dummy;
    return curr; 
}