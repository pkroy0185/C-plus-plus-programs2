#include<iostream>
using namespace std;
class book
{  private:
          int    pages;
          float  price;
          string name,author;
   public:
          void GetData();
          void DisplayData();
};
// we can also define member function inside class (but without scope resolution operator)
void book::GetData()
{
     cout<<"Enter Details of book :\n"<<endl;
     cout<<"NAME : ";
     getline(cin,name);
     cout<<"AUTHOR : ";
     getline(cin,author);
     cout<<"PAGES : ";
     cin>>pages;
     cout<<"PRICE : ";
     cin>>price;
}
void book::DisplayData()
{
     cout<<"\n\nDisplaying Details of book :\n"<<endl;
     cout<<"NAME : "<<name<<endl;
     cout<<"AUTHOR : "<<author<<endl;
     cout<<"PAGES : "<<pages<<endl;
     cout<<"PRICE : "<<price<<endl;
 
}
int main()
{
    book b1;
    cout<<"This program takes input about details of a book and displays it.....\n";
    b1.GetData();
    b1.DisplayData();
    return 0;
}