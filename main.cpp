
#include "String.hpp"
#include <iostream>

void Log(const char* str)
{
    std::cout << str << "\n";
}

void Log(const String& str)
{
    std::cout << str << "\n";
}
int main()
{
    String s = "Kan,";
    String b = "Ban";
    std::cout << sizeof(s) << "\n";
    s += b;
    Log(s);
    std::cout << sizeof(s) << "\n";
    return 0;
}

