#include<iostream>
#include<string>
#include"hashtable.h"
using namespace std;

int main(){
    HashTable table;
    if(table.isEmpty()){
        cout << "table is empty" << endl;
    }

    table.insertItem(32,"Bob");
    table.insertItem(405,"Jill");
    table.insertItem(35,"Rick1");
    table.insertItem(35,"Rick2");

    table.printTable();

    table.removeItem(32);
    table.removeItem(100);
    

    return 0;
}