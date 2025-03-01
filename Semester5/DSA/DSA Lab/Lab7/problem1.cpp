#include<iostream>
#include"BSTree.h"
using namespace std;

int main()
{
    BSTree tree;
    tree.insert('R');
    tree.insert('O');
    tree.insert('G');
    tree.insert('R');
    tree.insert('A');
    tree.insert('M');
    tree.insert('M');
    tree.insert('I');
    tree.insert('N');
    tree.insert('G');
    tree.insert('F');
    tree.insert('U');
    tree.insert('N');
    tree.insert('D');
    tree.insert('A');
    tree.insert('M');
    tree.insert('E');
    tree.insert('N');
    tree.insert('T');
    tree.insert('A');
    tree.insert('L');
    tree.insert('S');
    // cout<<"check for a key in BST 1 means present, 0 means not present: "<<tree.search(7)<<endl;
    // cout<<"check for a key in BST 1 means present, 0 means not present: "<<tree.search(6)<<endl;
    // cout<<"check for a key in BST 1 means present, 0 means not present: "<<tree.search(23)<<endl;
    // cout<<"check for a key in BST 1 means present, 0 means not present: "<<tree.search(9)<<endl;
    // cout<<"check for a key in BST 1 means present, 0 means not present: "<<tree.search(64)<<endl;
    // cout<<"Minimum value in the tree is : "<<tree.minValue()<<endl;
    // cout<<"Maximum value in the tree is : "<<tree.maxValue() <<endl;
    cout<<"Trees all values is in ascending order are : ";
    tree.inOrder();
    cout<<"\nThe size 0f tree is: "<<tree.treeSize();
    return 0;
}