#include "StrEntry.h"

StrEntry::StrEntry(int key, std::string value){
    this->key = key;
    this->value = value;
}

int StrEntry::getKey(){
    return key;
}

std::string StrEntry::getValue(){
    return value;
}