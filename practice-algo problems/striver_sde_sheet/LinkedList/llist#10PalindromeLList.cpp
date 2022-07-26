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
LinkedListNode<int>*getMiddle(LinkedListNode<int>*head){
    LinkedListNode<int>* slow = head;
    LinkedListNode<int>* fast = head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
LinkedListNode<int>*getReverse(LinkedListNode<int>*head){
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* next = NULL;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head == NULL || head->next == NULL){
        return true;
    }
    LinkedListNode<int>* mid = getMiddle(head);
    LinkedListNode<int>* temp = mid->next;
    mid->next = getReverse(temp);
    LinkedListNode<int>*head1 = head;
    LinkedListNode<int>*head2 = mid->next;
    while(head2!=NULL){
        //cout << "hello"<<endl;
        if(head1->data!=head2->data){
            //cout << "hello1"<<endl;
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    temp = getReverse(mid->next);
    mid->next = temp;
    return true;

}