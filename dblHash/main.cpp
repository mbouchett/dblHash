/* 
 * File:   main.cpp
 * Author: Mark Bouchett
 *
 * Created on August 11, 2017, 1:42 AM
 */

#include <iostream>     //console Input/Output
#include <string>       //string handler
#include "StrMap.h"     //our double hashing map

using namespace std; //declares the name space
// declare function prototypes

/*
 * 
 */
int main() {
    
    StrMap smap;
    
    smap.put(6937, "Mark");
    cout << smap.getKey(6937);

    return 0;
}

