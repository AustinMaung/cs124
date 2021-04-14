#include<iostream>
#include<string>
#include"hashtable.h"
using namespace std;

// Functions: main()
// Description: implementing and testing a separate chaining Hashtable
// Programmer: Austin Maung
// Date: 4/11/2021
// Version: 1.0
// Hardware: HP Pavilion
// Software: Windows 10
// Compiles under Visual Studio Code

int main(){
    HashTable table;
    cout << "Testcase: hashtable created is currently empty" << endl;
    if(table.isEmpty()){
        cout << "table is empty" << endl;
    }
    cout << "Testcase: inserting pairs, Rick1 getting replaced" 
    << " by Rick2 for sharing same key" << endl;
    table.insertItem(32,"Bob");
    table.insertItem(405,"Jill");
    table.insertItem(35,"Rick1");
    table.insertItem(35,"Rick2");
    table.printTable();
    cout << "Testcase: removing a pair by passing in a key,"
    << "removing a key that doesn't exist" << endl;
    table.removeItem(32);
    table.removeItem(100);
    table.printTable();
    return 0;
}
/*
Testcase: hashtable created is currently empty
table is empty
Testcase: inserting pairs, Rick1 getting replaced by Rick2 for sharing same key
Key exists arlready, value replaced.
key: 32 value: Bob
key: 405 value: Jill
key: 35 value: Rick2
Testcase: removing a pair by passing in a key,removing a key that doesn't exist
Key exists arlready, item removed.
Key not found, nothing removed
key: 405 value: Jill
key: 35 value: Rick2
 */