#include <bits/stdc++.h> 
/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Write your code here.
    unordered_map<LinkedListNode<int>*, LinkedListNode<int>*>mp;
    LinkedListNode<int>*dummy = new LinkedListNode<int>(0);
    LinkedListNode<int>*newCurr = dummy;
    LinkedListNode<int>*curr = head;
    while(curr!=NULL){
        LinkedListNode<int>*temp = new LinkedListNode<int>(curr->data); 
        newCurr->next = temp;
        newCurr = newCurr->next;
        mp[curr] = newCurr;
        curr = curr->next;
    }
    curr = head;
    newCurr = dummy->next;
    while(curr!=NULL && newCurr!=NULL){
        newCurr->random = mp[curr->random];
        curr = curr->next;
        newCurr = newCurr->next;
    }
    return dummy->next;
}
