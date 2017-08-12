#include "StrMap.h"

StrMap::StrMap(){
    size = 47;
    table = new StrEntry*[size];
    for (int i = 0; i < size; i++)
        table[i] = NULL;
}

StrMap::StrMap(int s){
    // fix the size param
    int size = s;
    if(size < 17)
        size = 17;
    
    table = new StrEntry*[size];
        for (int i = 0; i < size; i++)
            table[i] = NULL;
}

StrMap::~StrMap(){
    for (int i = 0; i < size; i++)
        if (table[i] != NULL)
            delete table[i];
    delete[] table;
}

std::string StrMap::getKey(int key){
    int hash = (key % size);
    while (table[hash] != NULL && table[hash]->getKey() != key)
        hash = (hash + 1) % size;
    if (table[hash] == NULL)
        return "Nil";
    else
        return table[hash]->getValue();
}

void StrMap::put(int key, std::string value){
    int hash = (key % size);
    while (table[hash] != NULL && table[hash]->getKey() != key)
        hash = (hash + 1) % size;
    if (table[hash] != NULL)
        delete table[hash];
    table[hash] = new StrEntry(key, value);
}