#include "StrEntry.h"

/**
 * constructor
 * @param key
 * @param value
 * @return 
 */
StrEntry::StrEntry(int key, std::string value){
    this->key = key;
    this->value = value;
}

/**
 * returns the stored key
 * @return 
 */
int StrEntry::getKey(){
    return key;
}

/**
 * returns the stored value
 * @return 
 */
std::string StrEntry::getValue(){
    return value;
}