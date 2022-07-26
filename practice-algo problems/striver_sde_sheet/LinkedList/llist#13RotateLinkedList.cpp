#include <bits/stdc++.h> 
/********************************

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

********************************/


Node *rotate(Node *head, int k) {
     // Write your code here.
    Node* curr = head;
    int count = 0;
    while(curr!=NULL){
        curr = curr->next;
        count++;
    }
    if(k%count==0){
        return head;
    }
    int n = k%count;
    Node* temp1 = head;
    Node* temp2 = head;
    for(int i =1; i<count-n; i++){
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    while(temp1->next!=NULL){
        temp1 = temp1->next;
    }
    temp1->next = head;
    head = temp2->next;
    temp2->next = NULL;
    return head;
}