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
          float sum(book b)
          {
            return price+b.price;
          }
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
    int p;
    char a[30],n[30];
    float amount,sum;
    cout<<"This program takes input about details of a book as arguments and displays it.....\n";
    cout<<"Enter Details of book1 :\n"<<endl;
    cout<<"NAME : ";
    cin.getline(n,30);
    cout<<"AUTHOR : ";
    cin.getline(a,30);
    cout<<"PAGES : ";
    cin>>p;
    cout<<"PRICE : ";
    cin>>amount;
    b1.GetData(n,a,p,amount);
    getchar();
    cout<<"Enter Details of book2 :\n"<<endl;
    cout<<"NAME : ";
    cin.getline(n,30);
    cout<<"AUTHOR : ";
    cin.getline(a,30);
    cout<<"PAGES : ";
    cin>>p;
    cout<<"PRICE : ";
    cin>>amount;
    b2.GetData(n,a,p,amount);
    cout<<"Book1 :";
    b1.DisplayData();
    cout<<"Book2 :";
    b2.DisplayData();
    sum=b1.sum(b2);
    cout<<"Total amount of both books is "<<sum<<endl;
    return 0;
}