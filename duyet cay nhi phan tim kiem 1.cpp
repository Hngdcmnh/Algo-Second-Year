#include <iostream>
using namespace std;

struct node
{
    int num ;
    node *left;
    node *right;
};

typedef struct node *Tree;

Tree makeNode(int t)
{
    Tree p = new node();
    p->num = t;
    p->left = NULL;
    p->right = NULL;
    return p;
    rand

Tree search(Tree t,int x )
{
    if(t!=NULL)
    {
        if(t->num==x)
        {
            return t;
        }
        else
        {
            Tree p = search(t->left,x);
            if(p==NULL) return search(t->right,x);
            else return p;
        }
    }
    else return NULL;
}

void add(Tree &t,int x)
{
    
    if(t== NULL) 
    {
        t= makeNode(x);
        return;
    }
    if(t->num > x) add(t->left,x);
    else add(t->right,x);

}

// void addRight(Tree &t,int x,int y)
// {
//     Tree p = search(t,x);
//     p->right =makeNode(y);
// }

void duyet(Tree t)
{
    if(t==NULL) return;
    duyet(t->left);
    duyet(t->right);
    if(t!=NULL) cout<<t->num<<" ";

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Tree root=NULL;
        while(n--)
        {
            int x;
            cin>>x;
            if(root==NULL)
            {
                root = makeNode(x);
            }
            else 
            {
                if(x<root->num) add(root,x);
                else add(root,x);
            }
        }
        duyet(root);
        cout<<endl;
    }

    
}