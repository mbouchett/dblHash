/* 
 * File:   main.cpp
 * Author: Mark Bouchett
 *
 * Created on August 11, 2017, 1:42 AM
 * This table demonstrates quadratic probing
 */

#include <iostream>     //console Input/Output
#include <string>       //string handler
#include "StrMap.h"     //our quadratic probing map

using namespace std;    //declares the name space

int main() {
    
    StrMap smap;    //instantiate hash map
    
    // stuff a bunch of values in the table
    smap.put(6937, "Mark");
    smap.put(1234, "John");
    smap.put(7896, "Paul");
    smap.put(4454, "George");
    smap.put(1597, "Ringo");
    smap.put(9371, "Mick");
    smap.put(6464, "Keith");
    smap.put(2134, "David");
    smap.put(8888, "Ron");
    smap.put(6497, "Billy");
    smap.put(1111, "Martha");
    smap.put(2222, "Susan");
    smap.put(3333, "Betsy");
    smap.put(4444, "Amy");
    smap.put(5555, "Margaret");
    smap.put(6666, "Ursala");
    smap.put(7777, "Karen");
    smap.put(8888, "Jimmy");
    smap.put(9999, "Peter");
    smap.put(1000, "Carly");
    smap.put(7788, "Wendy");
    
    
    // check a key
    cout << smap.getValue(2134) << " @Key-> 2134\n" ;

    return 0;
}

