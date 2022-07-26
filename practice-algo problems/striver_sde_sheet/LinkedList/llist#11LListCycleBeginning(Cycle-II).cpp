#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *firstNode(Node *head)
{
	//    Write your code here.
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;
    Node* entry = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            while(slow!=entry){
                slow = slow->next;
                entry = entry->next;
            }
            return entry;
        }
        
    }
    return NULL;
}