#include<iostream>
using namespace std;
class book
{  
           int    pages;
           float  price;
           string name,author;
     public:
           float total;
           void  GetData();
           void  DisplayData();
           void  sum(book b1,book b2)
           {
              total=b1.price+b2.price;
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
    book b1,b2,b3;
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
    b3.sum(b1,b2);
    cout<<"The sum of price of both books is "<<b3.total<<endl;
    return 0;
}