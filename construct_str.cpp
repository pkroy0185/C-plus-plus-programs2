#include<iostream>
#include<cstring>
using namespace std;
class str
{
    char *name;
    int length;
    public:
                str();
                str(char*);
               ~str();
           void Display();
           void Join(str &a,str &b);
};
str::str()
{
    
    length=0;
    name=new char[length+1];
}
str::str(char *c)
{
    length=strlen(c);
    name=new char[length+1];
    strcpy(name,c);
}
str::~str()
{
    delete name;
}
void str::Join(str &a,str &b)
{
    length=a.length+b.length;
    delete name;
    name=new char[length+1];
    strcpy(name,a.name);
    strcat(name,b.name);
}
void str::Display()
{
    cout<<name<<endl;
}
int main()
{
    char *first="Om Sri";
    str name1(first),name2("Sai"),name3("Ram"),s1,s2;
    s1.Join(name1,name2);
    s2.Join(s1,name3);
    name1.Display();
    name2.Display();
    name3.Display();
    s1.Display();
    s2.Display();
    return 0;
}