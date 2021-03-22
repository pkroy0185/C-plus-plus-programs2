#include<iostream>
using namespace std;
class book
{  
   public:
          int    pages;
          float  price;
          string name,author;
}b1;
void GetData()
{
     cout<<"Enter Details of book :\n"<<endl;
     cout<<"NAME : ";
     getline(cin,b1.name);
     cout<<"AUTHOR : ";
     getline(cin,b1.author);
     cout<<"PAGES : ";
     cin>>b1.pages;
     cout<<"PRICE : ";
     cin>>b1.price;
}
void DisplayData()
{
     cout<<"\n\nDisplaying Details of book :\n"<<endl;
     cout<<"NAME : "<<b1.name<<endl;
     cout<<"AUTHOR : "<<b1.author<<endl;
     cout<<"PAGES : "<<b1.pages<<endl;
     cout<<"PRICE : "<<b1.price<<endl;
 
}
int main()
{
    cout<<"This program takes input about details of a book and displays it.....\n";
    GetData();
    DisplayData();
    return 0;
}