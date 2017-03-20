/*
  Detect loop in a linked list 
  List could be empty also
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int HasCycle(Node* head)
{
   // Complete this function
   // Do not write the main method
   int result=0;
    if(head==NULL){
        return 0;
    }
    Node *x=head;
    Node *y=head->next->next;
    for(int i=1;i<100;i++)
       {
       if(x==NULL || y==NULL){
           result=0;
           break;
       }
   if(x==y){
       result=1;
       break; 
   }
        x=x->next;
        y=y->next->next;
   }
    return result;
    }
