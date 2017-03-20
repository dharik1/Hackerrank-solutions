 /* Node is defined as :
 class Node 
    int data;
    Node left;
    Node right;
    
    */

static Node Insert(Node root,int value)
    {
       Node x=new Node();
       Node z=root;
       x.data=value;
       x.left=x.right=null;
      if(z == null)
          {
          x.data=value;
          x.left=x.right=null;
          root=x;
          
      }
       
           
          else if(z.data > value)
               {
               z.left=Insert(z.left,value);
           }
          else if(z.data < value)
               {
               z.right=Insert(z.right,value);
           } 
       return root;
    }



