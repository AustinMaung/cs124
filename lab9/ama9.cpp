#include<iostream>
#include<iomanip>
#include<string>
#include"BinaryTree.h"

// Functions: main()
// Description: gather rainfall data using a linked list
// Programmer: Austin Maung
// Date: 2/28/2021
// Version: 1.0
// Hardware: HP Pavilion
// Software: Windows 10
// Compiles under Visual Studio Code
int main()
{
    BinaryTree<int> tree;
    cout << "Inserting Nodes." << endl;
    tree.insert(3);
    tree.insert(5);
    tree.insert(8);
    tree.insert(9);
    tree.insert(12);
    cout << "Here are the values in the tree:" << endl;
    tree.print();
    cout << "Deleting 8..." << endl;
    tree.erase(8);
    cout << "Deleting 12..." << endl;
    tree.erase(12);
    cout << "Now here are the nodes" << endl;
    tree.print();
    return 0;
}
/*Inserting Nodes.
Here are the values in the tree:
3 5 8 9 12
Deleting 8...
Deleting 12...
Now here are the nodes
3 5 9*/