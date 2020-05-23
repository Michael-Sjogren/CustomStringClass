
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
    String s = "Kan,Ban Anas";
    String b = "Ban Anas";
    String c = "Kan,Ban Anas";
    bool result = (s==c);
    s += b;
    Log(s);
    return 0;
}

