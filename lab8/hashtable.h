#include<iostream>
#include<list>
#include<cstring>
#include<string>
using namespace std;
#ifndef HASHMAP_H
#define HASHMAP_H 

// CS124-03
// FILE: Hashtable.h
// PROVIDES: A Hashtable class for lab 8
// FUNCTIONS in this toolkit:   
//   bool isEmpty()
//     postcondition: boolean whether the current Hashtable
//     has any pairs. Looks through each bucket to see if their empty
//   int hashFunction(int key)
//     postcondition: an index position in the array of buckets. Only
//     10 buckets so a simple hash function of using the modulus is used
//   void insertItem(int key, string value)
//     postcondition: inserts a key value pair into one of the buckets
//     after using the hash function on the key
//   void removeItem(int key)
//     precondtion: one of the buckets has a pair with the key
//     postcondition: key value pair no longer in the list of buckets
//   string searchTable(int key)
//     precondtion: one of the buckets has a pair with the key
//     postcondtion: returns value of the key passed in
//   void printTable()
//     postcondtion: traverses list of buckets printing each 
//     key value pair

class HashTable{
    private:
        static const int BUCKETS = 10;
        list<pair<int, string>> table[BUCKETS];
    public:
        bool isEmpty();
        int hashFunction(int key);
        void insertItem(int key, string value);
        void removeItem(int key);
        string searchTable(int key);
        void printTable();
};

#endif