/* 
 * File:   StrMap.h
 * Author: mark
 *
 * Created on August 11, 2017, 1:44 AM
 */

#ifndef STRMAP_H
#define STRMAP_H

#include <string>
#include "StrEntry.h"

class StrMap {

private:
    StrEntry **table;
    int size;
    
public:
    StrMap();        //no param constructor
    StrMap(int);    //table size
    ~StrMap();
    std::string getKey(int);
    void put(int, std::string);
};

#endif /* STRMAP_H */

