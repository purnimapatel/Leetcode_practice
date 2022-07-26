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
//one test case is giving runtime error
/*..................................................................*/
Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	// Write your code here.
    if(head == NULL|| head->next ==NULL){
        return head;
    }
    Node*dummy = new Node(0);
    dummy->next = head;
    Node*prev = dummy;
    Node*curr = dummy;
    Node*next = dummy;
    int count = 0;
    while(curr->next!=NULL){
        curr = curr->next;
        count++;
    }
    for(int i = 0; i<n; i++){
        int k = b[i];
        
        if(count>0 && k>1){
            curr = prev->next;
            next = curr->next;
            for(int j = 1; j<min(k,count); j++){
                curr->next = next->next;
                next->next = prev->next;
                prev->next = next;
                next = curr->next;
            }
            
        }
        prev = curr;
        count-=k;
    }
    return dummy->next;
}
//other person's solution which got accepted
/*******************************************************/
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

Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	// Write your code here.
     Node* cur = head;
    Node* prevstart = NULL;
    if (!head)
    {
        return head;
    }
    for (int i=0;i<n;i++)
    {
        int size = b[i];
        if (size == 0)
        {
            continue;
        }
        if (size == 1)
        {
            if (prevstart)
                prevstart->next = cur;
            else
                head = cur;
            prevstart = cur;
            cur = cur->next;
            continue;
        }
        if (!cur)
        {
            break;
        }
        Node* prev = NULL;
        Node* start = cur;
        int ct = 0;
        while (cur && ct<size)
        {
            Node* temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
            ct++;
        }
        if (prevstart)
            prevstart->next = prev;
        else
            head = prev;
        prevstart = start;
    }
    if (cur)
    {
        if (prevstart)
            prevstart->next = cur;
        else
            head = cur;
    }
    return head;
}