#include<iostream>
#include<cstring>
using namespace std;
class book
{  private:
          int    pages;
          float  price;
          char name[30],author[30];
   public:
          void GetData(char* ,char* ,int ,float );
          void DisplayData();
};
void book::GetData(char n[30],char a[30],int p,float amount)
{
     strcpy(name,n);
     strcpy(author,a);
     pages=p;
     price=amount;
}
void book::DisplayData()
{
     cout<<"\n  Displaying Details of book :\n"<<endl;
     cout<<"    NAME : "<<name<<endl;
     cout<<"    AUTHOR : "<<author<<endl;
     cout<<"    PAGES : "<<pages<<endl;
     cout<<"    PRICE : "<<price<<endl;
}
int main()
{
    book b1,b2;
    cout<<"This program takes input about details of a book as arguments and displays it.....\n";
    b1.GetData("Vidya vahini","sai baba",200,165.60);
    cout<<"Book1 :";
    b1.DisplayData();
    b2.GetData("Prema vahini"," Satya sai baba",500,265.60);
    cout<<"Book2 :";
    b2.DisplayData();
    return 0;
}