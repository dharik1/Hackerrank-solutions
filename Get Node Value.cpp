/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  int i=0;
    // You only need to complete this method.
    Node *x=head;
    Node *y=head;
    while(x!=NULL){
        x=x->next;
    if(i++>positionFromTail)
        {
        y=y->next;
    }
    }
    return y->data;
}
