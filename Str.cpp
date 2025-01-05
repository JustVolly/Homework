#include "Str.h"
#include <cctype>

Str::Str()
{
    Size = 1;
    str = new char[Size];
    str[0] = 0;
}

Str::Str(const char* arr)
{
    Size = strlen(arr) + 1;
    str = new char[Size];
    strcpy_s(str, Size, arr);
}

Str::Str(const Str& other)
{
    Size = other.Size;
    str = new char[Size];
    strcpy_s(str, Size, other.str);
}

Str::~Str()
{
    delete[] str;
}

Str& Str::operator=(const Str& other)
{
    if (this != &other)
    {
        delete[] str;
        Size = other.Size;
        str = new char[Size];
        strcpy_s(str, Size, other.str);
    }
    return *this;
}

Str& Str::operator++()
{
    for (int i = 0; i < Size - 1; ++i)
    {
        ++str[i];
    }
    return *this;
}

char& Str::operator[](int index)
{
    return str[index];
}

bool Str::operator==(const Str& other) const
{
    return strcmp(str, other.str) == 0;
}

bool Str::operator!=(const Str& other) const
{
    return !(*this == other);
}

const char* Str::getStr() const
{
    return str;
}

int Str::getSize() const
{
    return Size;
}

void Str::print() const
{
    cout << str << endl;
}

void Str::reverse()
{
    for (int i = 0; i < Size / 2 - 1; ++i)
    {
        char temp = str[i];
        str[i] = str[Size - 2 - i];
        str[Size - 2 - i] = temp;
    }
}


void Str::uppercase()
{
    for (int i = 0; i < Size - 1; ++i)
    {
        str[i] = toupper(str[i]);
    }
}




int main()
{
    Str s1;
    char courseName[] = "cpp";
    Str s2(courseName);
    Str s3(s2);

    s2.print();
    s3.print();

    s1 = s2;
    s1.print();

    ++s1;
    s1.print();

    s1[0] = 'P';
    s1.print();

    if (s1 == s2)
    {
        cout << "these two objects are the same" << endl;

    }
       
    else if (s1 != s2)
    {
        cout << "these two objects are not the same" << endl;

    }
       

    cout << s1.getSize() << endl;

    s2.reverse();
    s2.print();

    s2.uppercase();
    s2.print();

    return 0;
}
