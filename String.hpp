#include <cstring>
class String
{
private:
    unsigned int capacity = 100;
    unsigned int length = 0;
    char glyfths[100];
public:
    String();
    String(const char* str);
    String(char* str);
    unsigned int Length();
    void Append(String& other);
    operator const char*();
    String operator+=(String& other);
    ~String();
};

String::String()
{

}
String::String(const char* str)
{
    length = strlen(str)+1;
    if(sizeof(capacity) < sizeof(str)){
        
    }
    strncpy(glyfths , str ,length);
}

String::String(char* str){

}

unsigned int String::Length(){
    return length;
}

// append other string to my current instance
String String::operator+=(String& other) {
    Append(other);
    return glyfths;
}

String::operator const char* (){
    return glyfths; 
}

void String::Append(String& other){
    length = other.Length()+Length();
    strncat(glyfths ,other , length);
}

String::~String()
{

}


