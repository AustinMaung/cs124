// CS124-03
// FILE: LinkedList.h
// PROVIDES: A binary tree template for lab 9
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
    void erase(T element);
    void print() const;
    void print(Node<T>* parent) const;
    
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
void BinaryTree<T>::erase(T element)
{
    Node<T>* to_be_removed = root; //node that'll contain element
    Node<T>* parent = nullptr;
    bool found = false;
    while (!found && to_be_removed != nullptr)
    {
        //if to_be_removed contains element, end loop
        if (element == to_be_removed->data) {found = true;}
        //else traverse node, updating to_be_removed so
        //it can be checked next iteration
        else
        {
            //parent becomes to_be_removed before that node
            //updates, this is used later
            parent = to_be_removed;
            if (element < to_be_removed->data) {to_be_removed = to_be_removed->left;}
            else {to_be_removed = to_be_removed->right;}
        }      
    }

    if (!found) { return; }//if still not found, just exit

    // to_be_removed contains element, also check if node only has one child
    //if so, point the parent node to the one child, effectively removing
    //to_be_removed

    //this block also takes care of the situation where if there's no child

    if (to_be_removed->left == nullptr || to_be_removed->right == nullptr)
    {
        Node<T>* single_child;
        //set the single_child, if single child still remains to be null pointer,
        //it'll still be fine since the parent will then point to a null pointer
        // which still effectively removes the element
        if (to_be_removed->left == nullptr) {
            single_child = to_be_removed->right;
        }
        else {single_child = to_be_removed->left;}

        //parent is nullptr if to_be_removed was never
        //updated, this only happens if parent is the
        //root node, also the removal happens here
        if (parent == nullptr) {root = single_child;}
        //replacing to_be_removed by its child
        else if (parent->left == to_be_removed) {parent->left = single_child;}
        else {parent->right = single_child;}
        return;
    }

    //if neither child were empty, then find the smallest child
    //on the elements on the right side aka right subtree,
    //smallest_parent stored similarly to before and used later like before

    Node<T>* smallest_parent = to_be_removed;
    Node<T>* smallest = to_be_removed->right;
    while (smallest->left != nullptr)
    {
        smallest_parent = smallest;
        smallest = smallest->left;
    }
    //replace to_be_removed
    to_be_removed->data = smallest->data; 
    //link smallest children to what was smallest's parent
    //similar pattern to before
    if (smallest_parent == to_be_removed) 
    {
        smallest_parent->right = smallest->right; 
    }
    else 
    {
        smallest_parent->left = smallest->right; 
    }
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
   cout << parent->data << " ";
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
#endif
