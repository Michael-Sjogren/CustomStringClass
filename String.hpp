#include <cstring>
#include <ostream>
class String
{
private:
    char *m_buffer;
    unsigned int m_size = 0;
    // length of the string , not the memory size
    unsigned int m_length = 0;

public:
    String();
    String(const char *str);
    String(const String& s);
    unsigned int Length() const;
    void Append(String& other);
    operator const char*();
    char& operator[](unsigned int index);
    String operator +=(String& other);

    friend std::ostream& operator<<(std::ostream& stream , const String& string);
    ~String();
};

std::ostream& operator<<(std::ostream& stream , const String& string){
    stream << string.m_buffer;
    return stream;
}
char& String::operator[](unsigned int index){
    return m_buffer[index];
}

String::String(const String& other) :
    m_size(other.m_size)
{
    m_buffer = new char[m_size+1];
    memcpy(m_buffer , other.m_buffer , m_size +1);
}

String::String(const char *str)
{
    m_size = strlen(str);
    m_buffer = new char[m_size+1];
    strncpy(m_buffer,str , m_size);
    m_buffer[m_size] = 0;
}

unsigned int String::Length() const{
    return m_size;
}

// append other string to my current instance
String String::operator+=(String& other) {
    Append(other);
    return m_buffer;
}

String::operator const char* (){
    return m_buffer; 
}

void String::Append(String& other)
{
    char* temp = new char[m_size+other.m_size +1];
    strcpy(temp , m_buffer);
    delete [] m_buffer;
    m_buffer = nullptr;
    m_buffer = temp;
    m_size = m_size+other.m_size+1;
    strncat(m_buffer ,other.m_buffer , other.Length());
    temp = nullptr;
}

String::~String()
{
    delete[] m_buffer;
}


