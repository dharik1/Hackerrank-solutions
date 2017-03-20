/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/


void decode_huff(node * root,string s)
{
         node *z=root;
    int i;
    for(i=0;s[i];i++)
        {
        if(s[i]=='0')
            {
            z=z->left;
        }
        else{
            z=z->right;
        }
        if(z->data)
            {
            cout<<z->data;
            z=root;
        }
    }
}
