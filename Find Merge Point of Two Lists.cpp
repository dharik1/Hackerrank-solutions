/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. 
    Node *a=headA;
    Node *b=headB;
    while(a!=b)
        {
        if(a->next==nullptr)
            {
            a=headB;
        }
        else
    {
            a=a->next;
        }
        if(b->next==nullptr)
            {
            b=headA;
        }
        else
    {
            b=b->next;
        }
    }
    return b->data;
}

