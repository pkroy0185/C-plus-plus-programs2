#include<iostream>
using namespace std;
class book
{
  public:
         int pages;
         float price;
         string name,author;
};
int main()
{
    book b1;
    cout<<"This program takes input about details of a book and displays it.....\n";
    cout<<"Enter Details of book :\n"<<endl;
    cout<<"NAME : ";
    getline(cin,b1.name);
    cout<<"AUTHOR : ";
    getline(cin,b1.author);
    cout<<"PAGES : ";
    cin>>b1.pages;
    cout<<"PRICE : ";
    cin>>b1.price;
    cout<<"\n\nDisplaying Details of book :\n"<<endl;
    cout<<"NAME : "<<b1.name<<endl;
    cout<<"AUTHOR : "<<b1.author<<endl;
    cout<<"PAGES : "<<b1.pages<<endl;
    cout<<"PRICE : "<<b1.price<<endl;
    return 0;
}