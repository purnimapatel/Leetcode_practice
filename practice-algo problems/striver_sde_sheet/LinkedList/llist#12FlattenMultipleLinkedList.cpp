#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

class Node {
public:
	int data;
	Node* next;
	Node* child;

	Node(int data) {
		this->data = data;
		this->next = NULL;
		this->child = NULL;
	}
};

*****************************************************************/
Node* mergeTwoLists(Node* list1, Node* list2){
    Node* res = new Node(0);
    Node* temp = res;
    while(list1!=NULL && list2!=NULL){
        if(list1->data <list2->data){
            temp->child = list1;
            temp = temp->child;
            list1 = list1->child;
        }
        else{
            temp->child = list2;
            temp = temp->child;
            list2 = list2->child;
        }
    }
    if(list1) temp->child = list1;
    else temp->child = list2;
    return res->child;
}
Node* flattenLinkedList(Node* head) 
{
	// Write your code here
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node*down = head;
    Node*right = flattenLinkedList(head->next);
    down->next = NULL;
    head = mergeTwoLists(down, right);
    return head;
}
