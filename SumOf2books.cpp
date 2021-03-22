#include<iostream>
using namespace std;
class book
{  
           int    pages;
           float  price;
           string name,author;
     public:
           void  GetData();
           void  DisplayData();
           void  sum(book b1,book b2)
           {
              cout<<"Total amount of  both  books is  "<<b1.price+b2.price<<endl;
           }
};
void book::GetData()
{
     cout<<"    NAME : ";
     getline(cin,name);
     cout<<"    AUTHOR : ";
     getline(cin,author);
     cout<<"    PAGES : ";
     cin>>pages;
     cout<<"    PRICE : ";
     cin>>price;
}
void book::DisplayData()
{
     cout<<"    NAME : "<<name<<endl;
     cout<<"    AUTHOR : "<<author<<endl;
     cout<<"    PAGES : "<<pages<<endl;
     cout<<"    PRICE : "<<price<<endl;
 
}
int main()
{
    book b1,b2;
    cout<<"This program takes input about details of two books, displays it and also displays sum of price of both books.....\n";
    cout<<"Enter Details of books :\n"<<endl;
    cout<<"  Book1 :\n";
    b1.GetData();
    getchar();
    cout<<"  Book1 :\n";
    b2.GetData();
    cout<<"\n\nDisplaying Details of books :\n"<<endl;
    cout<<"  Book1 :\n";
    b1.DisplayData();
    cout<<"  Book1 :\n";
    b2.DisplayData();
    b1.sum(b1,b2);      // we can also write b3.sum(b1,b2)...but this is better
    return 0;
}