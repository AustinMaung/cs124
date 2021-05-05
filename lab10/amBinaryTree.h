// CS124-03
// FILE: amBinaryTree.h
// PROVIDES: A binary tree template for lab 10
//
// FUNCTIONS in this toolkit:   
//   BinaryTree()   constructor
//   void insert(T element);
//     inserts any value type, element into the tree
//   void add_node(Node<T>* parent, Node<T>* new_node) const;
//     helper function for insert, adds a node created into table
//   void erase(T element);
//     removes node from table
//   void print() const;
//     prints elements in table
//   void print(Node<T>* parent) const;
//     helper function for print() by printing the nodes data
//   void find(int id);
//     prints whether an employee has an id that matches with the given id
//   void findHelper(Node<T>* parent, int id)
//     helper function for find
#include<iostream>
using namespace std;
#ifndef BINARYTREE_H
#define BINARYTREE_H 

template <class T>
class Node
{
public:
   T data;
   Node<T>* left;
   Node<T>* right; 
};   

template <class T>
class BinaryTree
{
private:   
    Node<T>* root;
public:   
    BinaryTree();
    void insert(T element);
    void add_node(Node<T>* parent, Node<T>* new_node) const;
    void print() const;
    void print(Node<T>* parent) const;
    void find(int id);
    void findHelper(Node<T>* parent, int id);
};

template <class T>
BinaryTree<T>::BinaryTree()
{  
   root = nullptr;
}

template <class T>
void BinaryTree<T>::insert(T element) 
{  
    //create new node with the data, element
    Node<T>* new_node = new Node<T>;
    new_node->data = element;
    new_node->left = nullptr;
    new_node->right = nullptr;
    if (root == nullptr) { root = new_node; }
    //adds the newly created node underneath root in the right place
    else { add_node(root, new_node); }
}

template <class T>  
void BinaryTree<T>::print() const
{  
   print(root);
   cout << endl;
}  

template <class T>
void BinaryTree<T>::print(Node<T>* parent) const
{  
   if (parent == nullptr) { return; }
   print(parent->left);
   cout << parent->data<< endl;
   print(parent->right);
}

template <class T>
void BinaryTree<T>::add_node(Node<T>* parent, Node<T>* new_node) const
{  
    //if node data is less than its parent, move to left subtree
    if (new_node->data < parent->data)
    {  
        if (parent->left == nullptr) { parent->left = new_node; }
        //if already filled, go down a level and try again
        else { add_node(parent->left, new_node); }
    }
    //if greater than, move to right subtree
    else if (new_node->data > parent->data)
    {  
        if (parent->right == nullptr) { parent->right = new_node; }
        else { add_node(parent->right, new_node); }
    }
}

template <class T>
void BinaryTree<T>::find(int id)
{
    findHelper(root, id);
}

template <class T>
void BinaryTree<T>::findHelper(Node<T>* parent, int id)
{
    if(parent == nullptr) { cout << "That employee was not found." << endl;}
    else if(parent->data.getID() == id) { cout << "Employee was found: \n" 
    << parent->data << endl;}
    
    else if(id < parent->data.getID())
    {
        findHelper(parent->left, id);
    }
    else if (id > parent->data.getID())
    {
        findHelper(parent->right, id);
    }
}
#endif