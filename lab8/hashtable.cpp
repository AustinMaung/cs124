#include"hashtable.h"

bool HashTable::isEmpty(){
    int sum = 0;
    for(int i = 0; i < BUCKETS; i++)
    {
        sum += table[i].size();
    }
    if(sum <= 0 ) return true;
    return false;
}

//using simple hashfunction since only 10 buckets
int HashTable::hashFunction(int key){
    return key % BUCKETS;
}

void HashTable::insertItem(int key, string value){
    int bucketIndex = hashFunction(key);
    auto& bucket = table[bucketIndex];
    
    //check if key already in bucket
    bool keyExists = false;
    for(auto itr = begin(bucket); itr != end(bucket); itr++)
    {
        //if key exists, replace value
        if(itr->first == key)
        {
            keyExists = true;
            itr->second = value;
            cout << "Key exists arlready, value replaced." << endl;
            break;
        }
    }
    if(!keyExists) bucket.emplace_back(key, value);
}

void HashTable::removeItem(int key){
    int bucketIndex = hashFunction(key);
    auto& bucket = table[bucketIndex];
    
    //check if key already in bucket
    bool keyExists = false;
    for(auto itr = begin(bucket); itr != end(bucket); itr++)
    {
        //if key exists, erase key value pair
        if(itr->first == key)
        {
            keyExists = true;
            itr = bucket.erase(itr);
            cout << "Key exists arlready, item removed." << endl;
            break;
        }
    }
    if(!keyExists) cout << "Key not found, nothing removed" << endl;
}

void HashTable::printTable(){
    //traverse each bucket and each pair in the buckets
    for(int i = 0; i < BUCKETS; i++){
        //if there are pairs in current bucket
        if(table[i].size() > 0)
        {
            //traverse the bucket,printing each pair
            for(auto itr = begin(table[i]); itr != end(table[i]); itr++)
            {
                cout << "key: " << itr->first << " value: " << itr->second << endl;
            }
        }
    }
}
