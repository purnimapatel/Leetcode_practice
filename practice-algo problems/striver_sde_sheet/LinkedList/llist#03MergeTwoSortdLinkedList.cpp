#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if(first == NULL){
        return second;
    }
    if(second == NULL){
        return first;
    }
    Node<int>* curr1 = first;
    Node<int>* curr2 = second;
    Node<int>* ans = new Node<int>(0);
    Node<int>*prev = ans;
    while(curr1!=NULL && curr2!=NULL){
        if(curr1->data <= curr2->data){
            prev->next = curr1;
            curr1 = curr1->next;
        }
        else{
            prev->next = curr2;
            curr2 = curr2->next;
        }
        prev = prev->next;
    }
    prev->next = curr1!=NULL? curr1 : curr2;
    return ans->next;
}
