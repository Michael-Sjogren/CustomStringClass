
#include "String.hpp"
#include <iostream>

void Log(const char* str)
{
    std::cout << str << "\n";
}
int main(int argc, char const *argv[])
{
    String s = "One,";
    String b = "Two";
    s += b;
    Log(s);
    return 0;
}

