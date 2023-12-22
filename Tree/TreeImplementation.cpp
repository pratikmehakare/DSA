#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildTree(node *root1)//Main tree
{
    cout << "Enter data=" << endl;
    int data;
    cin >> data;
    root1 = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter left of " << data << " " << endl;
    root1->left = buildTree(root1->left);

    cout << "Enter right of " << data << " " << endl;
    root1->right = buildTree(root1->right);

    return root1;
}
void leveleordertraversal(node *root1)//print like tree
{
    queue<node *> q;
    q.push(root1);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
void inorder(node *root) // LNR  left node right   //middle
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(node *root) // NLR    //pre
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root) // LRN    //post
{
    if(root==NULL)
    {
        return;
    }

    preorder(root->left);
    preorder(root->right);
    cout<<root->data<<" ";
}
void buildfromlevelorder(node *&root)
{
    queue<node *> q;
    cout << "Enter data=";
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter left node for " << temp->data << endl;
        int leftdata;
        cin >> leftdata;

        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        cout << "Enter right node for " << temp->data << endl;
        int rightdata;
        cin >> rightdata;

        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}
int main()
{
    node *root = NULL;
    root = buildTree(root);
    
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout << "Taversal" << endl;
    leveleordertraversal(root);

    cout << "Inorder Taversal" << endl;
    inorder(root);

    cout << "Preorder Taversal" << endl;
    preorder(root);

    cout << "Postorder Taversal" << endl;
    postorder(root);



    //for build from 
    buildfromlevelorder(root);
    leveleordertraversal(root);
}