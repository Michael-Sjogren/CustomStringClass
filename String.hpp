#include <iostream>
class String
{
private:

public:
    const char* symbols;
    String();
    String(const char* str);
    operator const char*();
    String Append(String other);
    String operator+(String other);
    ~String();
};

String::String()
{

}
String::String(const char* str)
{
    symbols = str;    
}

// append other string to my current instance
String operator+(String other) {
    return "";
}
String::operator const char *(){
    return symbols;
}
String String::Append(String other){
    const int size = sizeof(other.symbols);
    std::cout<< symbols << "\n";
    return "";
}
String::~String()
{

}


