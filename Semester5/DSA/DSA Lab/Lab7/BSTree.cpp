#include<iostream>
#include"BSTree.h"
using namespace std;

BSTree::BSTree()
{
    root = NULL;
    _size = 0;
}

bool BSTree::search(char item)
{
    BSTNode * ptr = root;
    while(ptr)
    {
        if(item < ptr->data)
        {
            ptr = ptr->left;
        }
        else if(item > ptr->data)
        {
            ptr = ptr->right;
        }
        else
        {
            return true;
        }
    }
    return false;
}

void BSTree::insert(char value)
{
    if(isEmpty())
    {
        root = new BSTNode(value);
        _size++;
    }
    else
    {
        BSTNode * curr = root;
        BSTNode * prev = NULL;
        while(curr)
        {
            prev = curr;
            if(value < curr->data)
            {
                curr = curr->left;
            }
            else if(value > curr->data)
            {
                curr = curr->right;
            }
            else
            {
                cout<<"value is already present in the BST. "<<endl;
                return;
            }
        }
        if(value < prev->data)
        {
            prev->left = new BSTNode(value);
            _size++;
        }
        else
        {
            prev->right = new BSTNode(value);
            _size++;
        }

    }
}

bool BSTree::isEmpty() const
{
    if(root == NULL)
        return true;
    return false;
}

int BSTree::minValue() const
{
    if(!isEmpty())
    {
        BSTNode * ptr = root;
        BSTNode * prev = NULL;
        while(ptr)
        {
            prev = ptr;
            ptr = ptr->left;
        }
        return prev->data;
    }
    else
    {
        cout<<"this is an empty tree. "<<endl;
        return -999;
    }
}

int BSTree::maxValue() const
{
    if(!isEmpty())
    {
        BSTNode * ptr = root;
        BSTNode * prev = NULL;
        while(ptr)
        {
            prev = ptr;
            ptr = ptr->right;
        }
        return prev->data;
    }
    else
    {
        cout<<"this is an empty tree. "<<endl; 
        return -999;
    }
}

void BSTree::inOrder(BSTNode * ptr)
{
    if(ptr)
    {
        inOrder(ptr->left);
        cout<<ptr->data<<' ';
        inOrder(ptr->right);
    }
}

void BSTree::inOrder()
{
    inOrder(root);
}

int BSTree::treeSize()
{
    return _size;   
}