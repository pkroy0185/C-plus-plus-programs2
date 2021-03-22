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
     cout<<"\nDisplaying Details of book :\n"<<endl;
     cout<<"    NAME : "<<name<<endl;
     cout<<"    AUTHOR : "<<author<<endl;
     cout<<"    PAGES : "<<pages<<endl;
     cout<<"    PRICE : "<<price<<endl;
}
int main()
{
    book b1;
    char n[30],a[30];
    int p;
    float amount;
    cout<<"This program takes input about details of a book and displays it.....\n";
    cout<<"Enter Details of book :\n"<<endl;
    cout<<"NAME : ";
    cin.getline(n,30);
    cout<<"AUTHOR : ";
    cin.getline(a,30);
    cout<<"PAGES : ";
    cin>>p;
    cout<<"PRICE : ";
    cin>>amount;
    b1.GetData(n,a,p,amount);
    b1.DisplayData();
    return 0;
}