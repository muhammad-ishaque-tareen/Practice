#ifndef _BSTREE_
#define  _BSTREE_

class BSTree;

class BSTNode
{
    char data;
    BSTNode * left;
    BSTNode * right;
    friend class BSTree;
    public:
    BSTNode(char item, BSTNode * lft = NULL, BSTNode * rgh = NULL)
    {
        data = item;
        left = lft;
        right = rgh;
        
    }
};

class BSTree
{
    BSTNode * root;
    int _size;
    void inOrder(BSTNode *);
    public:
    BSTree();
    bool search(char);
    void insert(char);
    bool isEmpty() const;
    //void inOrder() const;
    int maxValue() const;
    int minValue() const;
    void inOrder();
    int treeSize();
   // int predecessor(int);
};



#endif