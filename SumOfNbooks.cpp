#include<iostream>
using namespace std;
#define n 3
class book
{  
     char name[30];
     char author[30];
     int  pages;
     int  price;
   public:
          void GetData();
          void DisplayData();
          int  TotalPrice(book*);
};
int book::TotalPrice(book b[])
{
    int i,total_price=0;
    for(i=0;i<n;i++)
       total_price+=b[i].price;
    return total_price;
}
void book::GetData()
{
     cout<<"     NAME : ";
     cin.getline(name,30);
     cout<<"     AUTHOR : ";
     cin.getline(author,30);
     cout<<"     PAGES : ";
     cin>>pages;
     cout<<"     PRICE : ";
     cin>>price;
}
void book::DisplayData()
{
     cout<<"     NAME : "<<name<<endl;
     cout<<"     AUTHOR : "<<author<<endl;
     cout<<"     PAGES : "<<pages<<endl;
     cout<<"     PRICE : "<<price<<endl;
 
}
int main()
{
    book b[n];
    int i;
    cout<<"This program takes input about details of n book and displays sum of price of all books.....\n";
    cout<<"Enter Details of book :\n"<<endl;
    for(i=0;i<n;i++)
    {
      cout<<"  Book"<<i+1<<" :\n";
      b[i].GetData();
      getchar();
    }
    cout<<"\n\nDisplaying Details of books :\n"<<endl;
    for(i=0;i<n;i++)
    {
      cout<<"  Book"<<i+1<<" :\n";
      b[i].DisplayData();
    }
    cout<<"Sum of Price of all books is "<<b[0].TotalPrice(b)<<endl;
    return 0;
}