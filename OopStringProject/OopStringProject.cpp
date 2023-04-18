#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class String
{
    char* str;
    int length;
public:
    String(const char* cstr)
    {
        length = strlen(cstr);
        str = new char[strlen(cstr) + 1] {};
        strcpy(str, cstr);
    }

    explicit String(int length) : length{ length }
    {
        str = new char[length + 1] {};
    }

    String(char ch) : length{ 1 }
    {
        str = new char[2] {};
        str[0] = ch;
    }

    friend std::ostream& operator<<(std::ostream& out, const String& s);
};
std::ostream& operator<<(std::ostream& out, const String& s)
{
    out << s.str;
    return out;
}

void PrintString(String s)
{
    std::cout << s;
}

int main()
{
    String s1("Hello");

    PrintString('A');



}
