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

Node *addTwoNumbers(Node *head1, Node *head2)
{
    // Write your code here.
    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }
    int carry = 0;
    int sum = 0;
    Node *curr1 = head1;
    Node *curr2 = head2;
    Node *ans = new Node(0);
    Node *prev = ans;
    
    while(curr1!=NULL && curr2!=NULL){
        int add = curr1->data+curr2->data+carry;
        sum = add%10;
        carry = add/10;
        Node *temp = new Node(sum);
        prev->next = temp;
        prev = prev->next;
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    if(curr1!=NULL){
        while(curr1!=NULL){
            int add = curr1->data+carry;
            sum = add%10;
            carry = add/10;
            Node *temp = new Node(sum);
            prev->next = temp;
            prev = prev->next;
            curr1 = curr1->next;
        }
    }
    if(curr2!=NULL){
        while(curr2!=NULL){
            int add = curr2->data+carry;
            sum = add%10;
            carry = add/10;
            Node *temp = new Node(sum);
            prev->next = temp;
            prev = prev->next;
            curr2 = curr2->next;
        }
    }
    if(carry!=0){
        Node *temp = new Node(carry);
        prev->next = temp;
        prev = prev->next;
    }
    return ans->next;
}