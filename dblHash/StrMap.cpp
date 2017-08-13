#include <c++/6/iostream>
#include "StrMap.h"

/**
 * no param constructor
 * @return 
 */
StrMap::StrMap(){
    size = MINSIZE;
    table = new StrEntry*[size];
    for (int i = 0; i < size; i++)
        table[i] = NULL;
}

/**
 * constructor with size param
 * @param s
 * @return 
 */
StrMap::StrMap(int s){
    // fix the size param
    int size = s;
    if(size < MINSIZE)
        size = MINSIZE;
    
    table = new StrEntry*[size];
        for (int i = 0; i < size; i++)
            table[i] = NULL;
}

/**
 * default deconstructor
 */
StrMap::~StrMap(){
    for (int i = 0; i < size; i++)
        if (table[i] != NULL)
            delete table[i];
    delete[] table;
}

/**
 * enter a key get a value back
 * @param key
 * @return 
 */
std::string StrMap::getValue(int key){
    int hash = (key % size);
    while (table[hash] != NULL && table[hash]->getKey() != key)
        hash = (hash + 1) % size;
    if (table[hash] == NULL)
        return "Nil";
    else
        return table[hash]->getValue();
}

/**
 * place a key value pair into the map
 * @param key
 * @param value
 */
void StrMap::put(int key, std::string value){
    int hash = (key % size);    // initial hash
    int bump = 0;               // for quadratic probing
    
    // look for an empty slot
    while (table[hash] != NULL && table[hash]->getKey() != key){
        
        // store the current values
        std::string s = table[hash]->getValue();
        int h = hash;
        
        bump++;
        hash = (hash + (bump * bump)) % size; // new quad probe
        //report the crash
        std::cout << value << " Crashed into " << s << std::endl;
        std::cout << "Therefore hash " << h << " was bumped to " << hash << std::endl;
    }
    
    if (table[hash] != NULL)
        delete table[hash];
    // store the values
    table[hash] = new StrEntry(key, value);
}