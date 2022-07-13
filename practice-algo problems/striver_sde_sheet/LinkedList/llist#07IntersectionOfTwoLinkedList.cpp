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

int findIntersection(Node *firstHead, Node *secondHead)
{
    if(firstHead == secondHead){
        return firstHead->data;
    }
    Node *curr1 = firstHead;
    Node *curr2 = secondHead;
    while(curr1!=NULL || curr2!=NULL){
        if(curr1 == curr2){
            return curr2->data;
        }
        if(curr1 == NULL){
            curr1 = secondHead;
            continue;
        }
        if(curr2 == NULL){
            curr2 = firstHead;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    return -1;
}