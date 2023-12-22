#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
void levelorderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
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
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
Node *minValue(Node *root)
{
    Node *temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
Node *maxValue(Node *root)
{
    Node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}
/*------main bst code----*/

Node *insertintoBST(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (data > root->data)
    {
        root->right = insertintoBST(root->right, data);
    }
    else
    {
        root->left = insertintoBST(root->left, data);
    }

    return root;
}
void takeinput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertintoBST(root, data);
        cin >> data;
    }
}
// Deletion
Node *deletion(Node *root, int val)
{
    // base case
    if (root == NULL)
    {
        return root;
    }
 
    // root equal to value
    if (root->data == val)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL; // after deleting it make it NULL
        }
        // 1 child
        // left
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left; // store left part of node in temp
            delete root;             // delete main root
            return temp;             // replace to the main root place
        }

        // right
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 child

        if (root->left != NULL && root->right != NULL)
        {
            int mini = minValue(root->right)->data;    // storeing mini value from right part of root
                                                       // so we can replace with root n balance it
            root->data = mini;                         // replace with the root value
            root->right = deletion(root->right, mini); // delete right mini vaue bcoz we put to the root place
            return root;
        }
    }

    // if value is smaller than root ,go to the left side
    else if (root->data > val)
    {
        root->left = deletion(root->left, val);
        return root;
    }
    else // if value is larger than root ,go to the right side
    {
        root->right = deletion(root->right, val);
        return root;
    }
}
int main()
{

    Node *root = NULL;

    cout << "Enter data to create BST=";
    takeinput(root);

    cout << endl
         << "Traversal" << endl;
    levelorderTraversal(root);
    cout << endl;

    cout << "Inoder ";
    inorder(root);
    cout << endl;

    cout << "preorder ";
    preorder(root);
    cout << endl;

    cout << "Postorder ";
    postorder(root);
    cout << endl;

    cout << "Min Value is " << minValue(root)->data << endl;

    cout << "Max Value is " << maxValue(root)->data << endl;

    /*----Deletion---*/

    root = deletion(root, 50);
    cout << "Deleted" << endl;

    cout << endl
         << "Traversal" << endl;
    levelorderTraversal(root);
    cout << endl;

    cout << "Inoder ";
    inorder(root);
    cout << endl;

    cout << "preorder ";
    preorder(root);
    cout << endl;

    cout << "Postorder ";
    postorder(root);
    cout << endl;

    cout << "Min Value is " << minValue(root)->data << endl;

    cout << "Max Value is " << maxValue(root)->data << endl;
}