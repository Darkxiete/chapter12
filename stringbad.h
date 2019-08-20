//
// Created by summer on 2019-08-20.
//

#ifndef CHAPTER12_STRINGBAD_H
#define CHAPTER12_STRINGBAD_H

#include <iostream>

class StringBad {
private:
    char * str;
    int len;
    static int num_strings;
public:
    StringBad();
    StringBad(const char * s); // implicit conversion
    ~StringBad();
    friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
};


#endif //CHAPTER12_STRINGBAD_H
