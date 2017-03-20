   /* 
    
    class Node 
       int data;
       Node left;
       Node right;
   */
   void LevelOrder(Node root)
    {
       LinkedList<Node> queue=new LinkedList<Node>();
       if(root != null)
           {
       queue.add(root);
       }
       while(!queue.isEmpty())
           {
           Node t=queue.poll();
           System.out.print(t.data + " ");
           if(t.left != null)
               {
             queue.add(t.left);
           }
          if(t.right != null)
               {
             queue.add(t.right);
           }
       }
      
    }
