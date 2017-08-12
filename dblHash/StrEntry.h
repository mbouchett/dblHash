/* 
 * File:   StrEntry.h
 * Author: mark
 *
 * Created on August 11, 2017, 1:43 AM
 */

#ifndef STRENTRY_H
#define STRENTRY_H

#include <string>

class StrEntry{
    private:
        int key;
        std::string value;
    public:
        StrEntry(int, std::string);
        int getKey();
        std::string getValue();
};

#endif /* STRENTRY_H */

