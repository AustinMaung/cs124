#include<iostream>
#include<list>
#include<cstring>
#include<string>
using namespace std;
#ifndef HASHMAP_H// Prevent duplicate definition
#define HASHMAP_H 

class HashTable{
    private:
        static const int BUCKETS = 10;
        list<pair<int, string>> table[BUCKETS];
    public:
        bool isEmpty();
        int hashFunction(int key);
        void insertItem(int key, string vlaue);
        void removeItem(int key);
        string searchTable(int key);
        void printTable();
};

#endif