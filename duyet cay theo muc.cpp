#include <iostream>
#include <queue>
#include <string>
#include <sstream>
using namespace std;

struct node
{
    int num;
    node *left;
    node *right;
};

typedef node *Tree;

Tree makeNode(int n)
{
    Tree p = new node();
    p->num=n;
    p->left=NULL;
    p->right=NULL;
    return p;
}

Tree search(Tree &t,int x)
{
    if(t!=NULL)
    {
        if(t->num==x) return t;
        Tree p = search(t->left,x);
        if(p==NULL) return search(t->right,x);
        else return p;
    }
    return NULL;
}

void addLeft(Tree &t,int x,int y)
{
    Tree p = search(t,x);
    p->left= makeNode(y);
}

void addRight(Tree &t,int x,int y)
{
    Tree p = search(t,x);
    p->right= makeNode(y);
}

void duyet(Tree t)
{
    queue <Tree> q;
    q.push(t);
    while(!q.empty())
    {
        Tree x = q.front();
        cout<<x->num<<" ";
        q.pop();
        if(x->left!=NULL) q.push(x->left);
        if(x->right!=NULL) q.push(x->right);
    }
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
            int x,y;
            char c;
            cin>>x>>y>>c;
            if(root==NULL)
            {
                root = makeNode(x);
            }
            if(c=='L')
            {
                addLeft(root,x,y);
            }
            else
            {
                addRight(root,x,y);
            }
        }

        duyet(root);
        cout<<endl;
    }
}