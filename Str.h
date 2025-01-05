#ifndef STR_H
#define STR_H

#include <iostream>
#include <cstring>

using namespace std;

class Str
{
private:
    int Size;
    char* str;

public:
    
    Str();
    Str(const char* arr);
    Str(const Str& other);
    ~Str();
    
    Str& operator=(const Str& other);
    Str& operator++();
    
    char& operator[](int index);
    
    bool operator==(const Str& other) const;
    bool operator!=(const Str& other) const;
    
    const char* getStr() const;
    int getSize() const;
    void print() const;
    void reverse();
    void uppercase();
};

#endif // STR_H
